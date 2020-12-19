package main
import "fmt"

func main()  {
    var n, omit, ele, actual, charged int
    fmt.Scan(&n,&omit)

    for i:=0; i<n; i++{
        fmt.Scan(&ele)
    
        if i != omit{
            actual += ele
        } 
    }

    fmt.Scan(&charged)
    actual = actual/2

    if charged == actual{
        fmt.Println("Bon Appetit")
    }else{
        fmt.Println(charged - actual)
    }
}