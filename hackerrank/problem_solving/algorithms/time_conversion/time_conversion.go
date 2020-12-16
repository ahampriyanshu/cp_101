package main 
import (
    "fmt"
)
func main() {
    var h,m,s int
    var str string

    fmt.Scanf("%d:%d:%d%s",&h,&m,&s,&str)

    if str == "AM" && h == 12 {
        h = 0
    }
    if str == "PM" && h != 12 {
        h += 12
    }
    fmt.Printf("%02d:%02d:%02d",h,m,s)
}
