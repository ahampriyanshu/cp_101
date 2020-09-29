def solve(test_case):
    n =int(input())
    li = [int(i) for i in input().split(" ")]

    mx = -1
    count = 0

    for i in range(n):
        if  li[i]> mx and ( i == n-1 or li[i]> li[i+1]):
            count += 1
        mx = max(mx, li[i]) 


    print("Case #{}: {}".format(test_case + 1, count))

if __name__ == "__main__":
    for test_case in range(int(input())):
        solve(test_case)