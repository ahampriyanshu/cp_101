"""
You are asked to ensure that the first and last names of people begin with a capital letter in their passports. 
For example, alison heck should be capitalised correctly as Alison Heck.
"""


import os
import sys

# Complete the solve function below.
def solve(s):
    for x in s.split():
        s = s.replace(x, x.capitalize())
    return s

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()
