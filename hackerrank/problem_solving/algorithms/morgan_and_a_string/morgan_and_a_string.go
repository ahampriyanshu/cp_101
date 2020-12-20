package main

import (
	"fmt"
	"strings"
)

func main() {

	var test int
	var a, b string
	fmt.Scan(&test)

	for t := 0; t < test; t++ {

		fmt.Scan(&a, &b)

		lena, lenb, i, j := len(a), len(b), 0, 0

		a += "x"
		b += "x"

		var ans strings.Builder

		for {
			if a[i] < b[j] || a[i] == b[j] && a[i:] < b[j:] {
				ans.WriteByte(a[i])
				i++
				if i == lena {
					ans.WriteString(b[j:lenb])
					break
				}
			} else {
				ans.WriteByte(b[j])
				j++
				if j == lenb {
					ans.WriteString(a[i:lena])
					break
				}
			}
		}
		fmt.Println(ans.String())
	}
}
