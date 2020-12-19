package main

import "fmt"

func main() {

	var pair, i, n, size int
	var color [101]int

	fmt.Scan(&n)

	for i = 0; i < n; i++ {
		fmt.Scan(&size)
		color[size]++

		if color[size]%2 == 0 {
			pair++
		}

	}

	fmt.Print(pair)
}
