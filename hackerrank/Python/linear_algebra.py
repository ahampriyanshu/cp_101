import numpy as np

li = np.array([list(map(float,input().split())) for _ in range(int(input()))])
print(round(np.linalg.det(li),2))
