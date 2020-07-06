"""
Read an integer N.
Without using any string methods, try to print 123...N following
"""
print(*range(1, int(input())+1), sep='')
