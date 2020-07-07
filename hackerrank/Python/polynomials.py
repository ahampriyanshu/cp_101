"""
The poly tool returns the coefficients of a polynomial with the given sequence of roots.

print numpy.poly([-1, 1, 1, 10])        #Output : [  1 -11   9  11 -10]
roots

The roots tool returns the roots of a polynomial with the given coefficients.

print numpy.roots([1, 0, -1])           #Output : [-1.  1.]
polyint

The polyint tool returns an antiderivative (indefinite integral) of a polynomial.

print numpy.polyint([1, 1, 1])          #Output : [ 0.33333333  0.5         1.          0.        ]
polyder

The polyder tool returns the derivative of the specified order of a polynomial.

print numpy.polyder([1, 1, 1, 1])       #Output : [3 2 1]
polyval

The polyval tool evaluates the polynomial at specific value.
ZZ:
print numpy.polyval([1, -2, 0, 2], 4)   #Output : 34
polyfit

The polyfit tool fits a polynomial of a specified order to a set of data using a least-squares approach.

print numpy.polyfit([0,1,-1, 2, -2], [0,1,1, 4, 4], 2)
#Output : [  1.00000000e+00   0.00000000e+00  -3.97205465e-16]
The functions polyadd, polysub, polymul, and polydiv also handle proper addition, subtraction, multiplication, and division of polynomial coefficients, respectively.

Task

You are given the coefficients of a polynomial .
Your task is to find the value of  at point .

"""

from numpy import polyval

li = list(map(float, input().split(' ')))
x = float(input())
print(polyval(li, x))

