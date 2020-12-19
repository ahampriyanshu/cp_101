package main

import "fmt"

func main() {
	var n, m, a, b, k, max, sum, i int

	fmt.Scan(&n, &m)

	arr := make([]int, n)

	for i = 0; i < m; i++ {

		fmt.Scan(&a, &b, &k)

		arr[a-1] += k

		if b+1 <= n {
			arr[b] -= k
		}
	}

	for _, ele := range arr {
		sum += ele
		if sum > max {
			max = sum
		}
	}

	fmt.Println(max)

}
