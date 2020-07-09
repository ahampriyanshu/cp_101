"""

Problem Statement :https://www.hackerrank.com/rest/contests/master/challenges/s10-interquartile-range/download_pdf?language=English

"""


    from statistics import median

n = int(input())
X, F = [list(map(int, input().split())) for _ in range(2)]


S = []
for i in range(n):
    S += [X[i]] * F[i]
N = sum(F)
S.sort()


if n%2 != 0:
    q1 = median(S[:N//2])
    q3 = median(S[N//2+1:])
else:
    q1 = median(S[:N//2])
    q3 = median(S[N//2:])

print(round(float(q3-q1), 1))
