package main 
import "fmt"

func main() {
    var test,m,n int
    
    fmt.Scan(&test)
    
    for t:=0; t<test; t++{
    
    fmt.Scan(&m,&n)
    
    cost :=  make([]int, n)

    for i:=0; i<n; i++{
    fmt.Scan(&cost[i])
    }

    for i:=0; i<n; i++{
    for j:=i+1; j<n; j++{
    
    if cost[i] + cost[j] == m{
    fmt.Println(i+1,j+1)
    break
    }
    }
    }
}
}
