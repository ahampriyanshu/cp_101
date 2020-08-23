"""
Author : ahampriyanshu
Problem: 9
Platform: Project Euler
Time: 23-Aug-2020 14:21
Quote:"And the moth said because the light was on"
Problem Statement:    
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
"""

for _ in range(int(input())):
    N = int(input())
    ans = -1
    for a in range(1, int(N**1/2)):
        b = N * (a - N // 2) // (a - N)
        c = N - a - b
        if a * a + b * b == c * c and a < b < c :
            check = a * b * c
            if check > ans:
                ans = check
    print(ans)
