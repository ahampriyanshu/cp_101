"""

For details of problem statement visit:

https://www.hackerrank.com/rest/contests/master/challenges/the-minion-game/download_pdf?language=English

"""

def minion_game(s):
    # your code goes here
    i = len(s)
    t = 0
    k = 0
    for x in range(i):
        if s[x] == "A" or s[x] == "E" or s[x] == "I" or s[x] == "O" or s[x] == "U":
            k = k + (i - x)
        else:
            t = t + (i - x)
    if t == k:
        print("Draw")
    elif t > k:
        print("Stuart", t)
    else:
        print("Kevin", k)

