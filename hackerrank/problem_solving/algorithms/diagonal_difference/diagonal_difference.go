package main

    import (
        "fmt"
        "math"
    )

    func main(){

        var n,ele,left,right int
        fmt.Scan(&n)
        
        for i:=0;i<n;i++{
            for j:=0;j<n;j++{
                fmt.Scan(&ele)
                if i == j {
                    left += ele
                }
                if i+j == n-1 {
                    right += ele
                }
            }
        }

        ans := math.Abs(float64(left - right))
        fmt.Println(ans)


    }
