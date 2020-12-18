package main

import "fmt"

func main(){
    var s,t,a,b,m,n,temp,apple,orange int
    fmt.Scan(&s,&t,&a,&b,&m,&n)
    
    for i:= 0;i<m;i++{
        fmt.Scan(&temp)
        if a+temp >= s && a+temp <= t {
            apple++
        }
    }
    
    for i:= 0;i<n;i++{
        fmt.Scan(&temp)
        if b+temp >= s && b+temp <= t {
            orange++
        }
    }
    
    fmt.Printf("%d\n%d",apple,orange)
}
