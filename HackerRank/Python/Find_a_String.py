"""

For Details of problem statement visit:

https://www.hackerrank.com/rest/contests/master/challenges/find-a-string/download_pdf?language=English

"""

def count_substring(s, su):
    c = 0
    for x in range(0, len(s)):
        if s[x] == su[0]:
            c = c + s.count(su, x, x + len(su))
    return c


if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)

