try:
    t = int(input())
    while(t):
        s = input()
        len = input()
        s = s.strip()
        s = s.replace(' ', "%20")
        print(s)
        print()
        t = t -1
except:
    pass