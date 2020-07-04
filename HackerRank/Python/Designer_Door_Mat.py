"""

For Details of problem statement visit:

https://www.hackerrank.com/rest/contests/master/challenges/designer-door-mat/download_pdf?language=English

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


