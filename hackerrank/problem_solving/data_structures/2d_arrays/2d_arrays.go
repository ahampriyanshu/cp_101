package main

import "fmt"

func main() {

	var max, i, j, sum int
	var arr [6][6]int
	max = -64

	for i = 0; i < 6; i++ {
		for j = 0; j < 6; j++ {

			fmt.Scan(&arr[i][j])
		}
	}

	for i = 0; i < 4; i++ {
		for j = 0; j < 4; j++ {

			sum = arr[j][i] + arr[j][i+1] + arr[j][i+2] + arr[j+1][i+1] + arr[j+2][i] + arr[j+2][i+1] + arr[j+2][i+2]

			if max < sum {
				max = sum
			}
		}
	}

	fmt.Println(max)

}
