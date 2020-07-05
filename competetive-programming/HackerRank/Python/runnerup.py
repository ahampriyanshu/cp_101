"""
Given the participants' score sheet for your University Sports Day, you are required to find the runner-up score. 
You are given  scores. Store them in a list and find the score of the runner-up.

My Solution :

if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    items = sorted(arr,reverse=True)
    for item in range(len(items)):
        if items[item] != items[item +1]:
            print(items[item+1])
            break
            
Not So Better Solution
""" 
n = int(input())
arr = list(map(int, input().split()))
zes = max(arr)
i=0
while(i<n):
    if zes ==max(arr):
        arr.remove(max(arr))
    i+=1
print(max(arr))
