package main
import "fmt"

func main(){
    var n,ele, sum int
    
    fmt.Scan(&n)
    
    for i:=0;i<n;i++{
        fmt.Scan(&ele)
        sum += ele
    }
    
    fmt.Println(sum)
}
