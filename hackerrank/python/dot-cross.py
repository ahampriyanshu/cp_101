"""
dot

The dot tool returns the dot product of two arrays.

import numpy

A = numpy.array([ 1, 2 ])
B = numpy.array([ 3, 4 ])

print numpy.dot(A, B)       #Output : 11
cross

The cross tool returns the cross product of two arrays.

import numpy

A = numpy.array([ 1, 2 ])
B = numpy.array([ 3, 4 ])

print numpy.cross(A, B)     #Output : -2
"""

import numpy as np

arr=int(input())

arr1 = [list(map(int,input().split())) for _ in range(arr)]

arr2 = [list(map(int,input().split())) for _ in range(arr)]

print(np.dot(arr1,arr2))