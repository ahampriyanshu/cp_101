package main

import "fmt"

func main() {

	var i, n, query, ans, action, x, y int
	fmt.Scan(&n, &query)

	a := make([][]int, n)

	for i = 0; i < query; i++ {
		fmt.Scan(&action, &x, &y)
		b := &a[(x^ans)%n]
		switch action {
		case 1:
			*b = append(*b, y)
		case 2:
			ans = (*b)[y%len(*b)]
			fmt.Println(ans)
		}
	}
}
