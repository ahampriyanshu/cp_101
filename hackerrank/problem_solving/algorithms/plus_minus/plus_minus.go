package main

import "fmt"

func main(){
    
    var n, ele,pos,neg,zero int
    
    fmt.Scan(&n)
    
    for i:=0;i<n;i++{
        fmt.Scan(&ele)
        if ele > 0{
        pos++
        }else if ele < 0 {
            neg++
        } else{
            zero++
        }
    }
    
        ans_p := float64(pos)/float64(n)
        ans_n := float64(neg)/float64(n)
        ans_z := float64(zero)/float64(n)

        fmt.Printf("%.6f\n",ans_p)
        fmt.Printf("%.6f\n",ans_n)
        fmt.Printf("%.6f\n",ans_z)
        
}
