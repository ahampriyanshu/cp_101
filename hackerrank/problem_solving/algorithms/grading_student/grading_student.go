package main

import "fmt"

func main(){
    var n,ele int
    fmt.Scan(&n)
    
    for i:=0;i<n;i++{
        fmt.Scan(&ele)
        if ele<38{
            fmt.Println(ele)
        }else{
            if ele % 5 > 2 {
                fmt.Println(((ele/5)+1)*5)
            }else {
                fmt.Println(ele)
            }
        }
    }
}
