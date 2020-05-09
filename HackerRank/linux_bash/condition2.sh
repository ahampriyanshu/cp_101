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
