"""
Objective
In this challenge, we learn about binomial distributions. Check out the Tutorial tab for learning materials!

Task
The ratio of boys to girls for babies born in Russia is 1.09:1 .
If there is 1 child born per birth, what proportion of Russian families with exactly 6
children will have at least 3 boys?

Write a program to compute the answer using the above parameters.
Then print your result, rounded to a scale of  decimal places (i.e., 1.234 format).

Input Format

A single line containing the following values:

1.09 1

If you do not wish to read this information from stdin, you can hard-code it into your program.
"""

from math import factorial , pow

n = 1.09

p = 1.09 / ( 1 + 1.09 )

ans = list((factorial(6) / (factorial(n)*factorial(6-n)))*pow(p, n)*pow((1-p), (6-n)) for n in [3, 4, 5, 6])

print(round(sum(ans), 3))
