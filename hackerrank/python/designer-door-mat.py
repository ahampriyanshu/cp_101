"""
Mr. Vincent works in a door mat manufacturing company. One day, he designed a new door mat with the following specifications:

Mat size must be N X M . (N is an odd natural number, and M is 3 times N .)
The design should have 'WELCOME' written in the center.
The design pattern should only use |, . and - characters.

For Details of problem statement visit:

https://www.hackerrank.com/rest/contests/master/challenges/designer-door-mat/download_pdf?language=English


"""

"""
Priyanshu's Solution:
"""

n, m = map(int,input().split())
pattern = [('.|.'*(2*i + 1)).center(m, '-') for i in range(n//2)]
print('\n'.join(pattern + ['WELCOME'.center(m, '-')] + pattern[::-1]))

"""
Vaibhav's solution
"""

s = map(int, input().split())
l = []
l.extend(s)
a = l[0]
b = l[1]
s = ".|."
d = (b-3)//2
for x in range(a//2):
    print(d*"-",end="")
    print(s,end="")
    print(d*"-")
    s = ".|." + s + ".|."
    d = d - 3
d = d + 3
print(((b-7)//2)*"-",end="")
print("WELCOME",end="")
print(((b-7)//2)*"-")
for x in range(a//2 + 1, a):
    print(d*"-",end="")
    print(s[:len(s)-6],end="")
    print(d*"-")
    d = d + 3
    s = s[ :len(s)-6]


