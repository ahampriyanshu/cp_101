package main

import "fmt"

func main()  {
    
    var x1,x2,v1,v2 int64
	fmt.Scan(&x1,&v1,&x2,&v2)
	
	ans := "NO"

    if  v2 < v1 && (x2 - x1)%(v1 - v2) == 0 {
    ans = "YES"
    }
	
	fmt.Println(ans)
}