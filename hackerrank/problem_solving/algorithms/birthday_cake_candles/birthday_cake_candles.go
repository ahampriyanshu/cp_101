package main

import "fmt"

    func main(){

        var n,ele,max,ans int
        fmt.Scan(&n)

        a := []int{}

        for i:=0;i<n;i++{
            fmt.Scan(&ele)
            a = append(a,ele)
            if ele > max {
                max = ele
            }
        }

        for _,num := range a{
            if num == max{
                ans++
            }
        }

        fmt.Println(ans)

    }
