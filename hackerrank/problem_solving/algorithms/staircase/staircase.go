package main

import "fmt"

func main(){
    
var n int

fmt.Scan(&n)

for i:=1; i<=n; i++{
    for j:=n; j>=1; j--{
        
        if j <= i{
            fmt.Print("#")
        } else {
            fmt.Print(" ")
        }
    }
    fmt.Println()
}  
}
