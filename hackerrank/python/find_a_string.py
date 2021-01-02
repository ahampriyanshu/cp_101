"""
In this challenge, the user enters a string and a substring. You have to print the number of times that the substring occurs in the given string. String traversal will take place from left to right, not from right to left.

NOTE: String letters are case-sensitive.

Input Format

The first line of input contains the original string. The next line contains the substring.

For Details of problem statement visit:

https://www.hackerrank.com/rest/contests/master/challenges/find-a-string/download_pdf?language=English

"""

def count_substring(string, sub_string):
    return (sum([ 1 for i in range(len(string)-len(sub_string)+1) if string[i:i+len(sub_string)] == sub_string]))

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)

"""
Shukla's Solution:
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
