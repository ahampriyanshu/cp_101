"""
For details of problem statement visit:

https://www.hackerrank.com/rest/contests/master/challenges/python-quest-1/download_pdf?language=English

"""

for x in range(1,int(input())+1):
	print(sum(list(map(lambda k: (x*(10**k)), range(x)))))
