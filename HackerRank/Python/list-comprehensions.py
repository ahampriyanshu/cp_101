"""
Let's learn about list comprehensions! You are given three integers x,y,z  and n representing the dimensions of a cuboid along with an integer
You have to print a list of all possible coordinates given by  on a 3D grid where the sum of x,y,z is not equal to n.

"""

"""
My solution:

x = int(input())
y = int(input())
z = int(input())
n = int(input())
li=[]
p=0
for i in range(x+1):
    for j in range(y+1):
        for k in range(z+1):
            if i+j+k != n:
                li.append([])
                li[p] = [i,j,k]
                p = p+1
print(li)

Better solution:
"""

x, y, z, n = (int(input()) for _ in range(4))
print ([[a,b,c] for a in range(x+1) for b in range(y+1) for c in range(z+1) if a + b + c != n ]
