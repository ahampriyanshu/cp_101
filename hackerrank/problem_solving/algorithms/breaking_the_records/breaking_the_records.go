package main
import "fmt"

func main()  {
	
	var n,cnt_min,cnt_max int

	fmt.Scan(&n)
	fmt.Scan(&ele)
	min := ele
	max := ele

	for i:=1; i<n; i++{
		fmt.Scan(&ele)
		if ele < cnt_min{
			min = ele
			cnt_min++
		}
		if ele > cnt_max{
			max = ele
			cnt_max++
		}
	}
	fmt.Println(cnt_max,cnt_min)
}