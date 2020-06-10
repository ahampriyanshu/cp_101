from math import floor

def prime(n,l):
    x=l[len(l)-1]
    while len(l)<n:
        x+=2
        y=floor(x**0.5)
        count=0
        for i in l:
            if i>y:
                count=0
                break
            if x%i==0:
                count=1
                break
        if count==0:
            l.append(x)
    return l


l=[2,3]
for i in range(int(input())):
    n=int(input())
    if len(l)<n:
        l=prime(n,l)
    print(l[n-1])
