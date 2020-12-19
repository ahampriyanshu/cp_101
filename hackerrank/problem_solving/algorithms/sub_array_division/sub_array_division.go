package main
import "fmt"

func main(){
    var n,sum,len,cnt int
    fmt.Scan(&n)
    
    a:= make([]int,n)
    for i:=0;i<n;i++{
        fmt.Scan(&a[i])
    }
    fmt.Scan(&sum,&len)
    
    for i:=0;i<=n-len;i++{
        ans := 0
        for j:=i;j<i+len;j++{
            ans += a[j] 
            }
            if ans == sum{
            cnt++;
            }
        }
        fmt.Println(cnt)
    }
