:'
Given three integers (, , and ) representing the three sides of a triangle, identify whether the triangle is scalene, isosceles, or equilateral.

If all three sides are equal, output EQUILATERAL.
Otherwise, if any two sides are equal, output ISOSCELES.
Otherwise, output SCALENE.
Input Format

Three integers, each on a new line.

Output Format

One word: either "SCALENE" or "EQUILATERAL" or "ISOSCELES" (quotation marks excluded).

Sample Input

Sample Input 1

2
3
4
Sample Input 2

6
6
6  
Sample Output

Sample Output 1

SCALENE
Sample Output 2

EQUILATERAL  
'
#!/bin/bash
read a
read b
read c

if [ $a -eq $b ] || [ $a -eq $c ] || [ $c -eq $b ];then
    if [ $((a+b)) -eq $((c*2)) ];then
        echo "EQUILATERAL"
    else
        echo "ISOSCELES"
        fi
else
    echo "SCALENE"
    fi
