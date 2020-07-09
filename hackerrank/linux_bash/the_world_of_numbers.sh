:'
Problem Statement:https://www.hackerrank.com/rest/contests/master/challenges/bash-tutorials---the-world-of-numbers/download_pdf?language=English
'


#!/bin/bash
read X
read Y
printf "%s\n" $X{+,-,*,/}"($Y)" | bc
