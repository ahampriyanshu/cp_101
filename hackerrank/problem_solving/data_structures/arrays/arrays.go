package main

import "fmt"

func main() {
	var n, i int

	fmt.Scan(&n)
	arr := make([]int, n)

	for i = 0; i < n; i++ {
		fmt.Scan(&arr[i])
	}

	for i = n - 1; i >= 0; i-- {
		fmt.Printf("%d ", arr[i])
	}

}
