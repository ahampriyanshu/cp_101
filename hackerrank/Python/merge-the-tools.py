"""

For Details of problem statement visit:

https://www.hackerrank.com/rest/contests/master/challenges/merge-the-tools/download_pdf?language=English

"""

def merge_the_tools(s, k):
    l = []
    m = []
    n = set()
    l.extend(s)
    for x in range(0, len(s), k):
        m.extend(s[x:x + k])
        n = set(m)
        for y in range(len(m)):
            if len(set(m[y]).intersection(n)) == 1:
                print(m[y],end = "")
                n.remove(m[y])
        print("")
        n = set()
        m = []

