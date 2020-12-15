marksheet = [[input(), float(input())] for _ in range(int(input()))]
second_highest = sorted(list(set([marks for name, marks in marksheet])))[1]
print('\n'.join([a for a,b in sorted(marksheet) if b == second_highest]))
