:'
Problem Statement:https://www.hackerrank.com/rest/contests/master/challenges/bash-tutorials---comparing-numbers/download_pdf?language=English
'

#!/bin/bash
read firstNumber
read secondNumber
if (($firstNumber > $secondNumber)); then
    echo X is greater than Y;
elif (($firstNumber < $secondNumber)); then
    echo X is less than Y;
else
    echo X is equal to Y;
fi
