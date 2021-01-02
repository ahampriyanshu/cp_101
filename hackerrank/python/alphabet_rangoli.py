"""

For Details of problem statement visit:

https://www.hackerrank.com/rest/contests/master/challenges/alphabet-rangoli/download_pdf?language=English

"""

def print_rangoli(a):
    #a = int(input())
    mid = 2 * a - 2
    d = 96 + a
    s,t,u,v = chr(d),"",chr(d),chr(d)
    k = a
    ls = []
    for r in range(a):
        ds = (2*k-2)*"-"
        print(ds,end="")
        print(s,end="")
        print(ds)
        u = u + "-"
        v =  "-" + v
        if r == a - 2:
            t = s
        s =  u + chr(d-1)  + v
        u = u + chr(d-1)
        v = chr(d-1) + v
        d = d - 1
        k = k - 1
    k = k + 2
    for r in range(a-1):
        ds = (2*k-2)*"-"
        print(ds,end="")
        if r != a-2:
            print(t,end="")
        else:
            print(t[0],end="")
        print(ds)
        t = t[0:len(t)//2] + t[len(t)//2 + 4: len(t)]
        k = k + 1

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)


"""
    Priyanshu's Solution
"""

import string


def print_rangoli(size):
    width = 4*size - 3
    pattern = []
    for i in range(n):
        line = "-".join(string.ascii_lowercase[i:n])
        L.append((s[::-1]+s[1:]).center(width, "-"))
    print('\n'.join(L[:0:-1]+L))

    
if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)