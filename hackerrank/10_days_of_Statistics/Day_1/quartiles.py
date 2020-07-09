# Task
# Given an array of integers, calculate the respective first quartile (), second quartile (), and third quartile ().
# It is guaranteed that Q1, Q2, and Q3 are integers.

# Input format
# The first line contains an integer, n, denoting the number of elements in the array.
# The second line contains n space-separated integers describing the array's elements.

# Constraints
# n >= 5 and n <= 50
# x_i > 0 and x_i <= 100

# Output Format
#
# Print  lines of output in the following order:
#
# The first line should be the value of Q1.
# The second line should be the value of Q2.

from statistics import median

n = int(input())
X = list(map(int, input().split(' ')))

X.sort()

if n%2==0 :
    li = median(X[:n//2]), median(X), median(X[n//2:])
    li = list(map(int, li))
    print(*li, sep='\n')
else:
    li = median(X[:n//2]), median(X), median(X[n//2+1:])
    li = list(map(int, li))
    print(*li, sep='\n')
# The third line should be the value of Q3.
