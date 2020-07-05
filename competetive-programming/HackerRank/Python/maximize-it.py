from itertools import product

K,M = map(int,input().split())
li = (list(map(int, input().split()))[1:]  for _ in range(K))
results = (sum(num**2 for num in numbers) % M for numbers in product(*li))
print(max(results))
