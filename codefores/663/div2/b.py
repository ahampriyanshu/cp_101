for _ in range(int(input())):
    n,m = map(int,input().split())
    count = 0
    for i in range(n):
        s = input()
        if s[-1]=='R':
            count+=1

    count+= s.count('D')
    print(count)
