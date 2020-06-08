import sys


for _ in range(int(input())):
    n = int(input().strip())
    print(pow((((n+1)*n)//2),2) - (n*(n+1)*((2*n)+1))//6)
