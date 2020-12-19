package main
import "fmt"

func main(){
    var n,ele int
    
    fmt.Scan(&n)
    
    arr := make([]int,5)
    
    for i:=0;i<n;i++{
        fmt.Scan(&ele)
        ele = ele -1
        arr[ele]++
    }
    max,ans := arr[0],0
    
    for i,num := range arr{
        if num > max{
            max = num
            ans = i+1
        }
    }
    fmt.Println(ans)
}
