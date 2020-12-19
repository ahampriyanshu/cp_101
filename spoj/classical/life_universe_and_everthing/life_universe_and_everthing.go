package main

import "fmt"

func main() {
	var num int

	for true {
		fmt.Scan(&num)
		if num == 42 {
			break
		} else {
			fmt.Println(num)
		}
	}
}
