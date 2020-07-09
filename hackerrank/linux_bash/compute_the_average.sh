:'
https://www.hackerrank.com/rest/contests/master/challenges/bash-tutorials---compute-the-average/download_pdf?language=English
'

read n
arr=($(cat))
arr=${arr[*]}
printf "%.3f" $(echo $((${arr// /+}))/$n | bc -l)
