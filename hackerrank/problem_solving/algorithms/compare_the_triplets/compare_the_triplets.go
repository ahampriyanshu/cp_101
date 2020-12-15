package main 
import "fmt"

func main(){
    var arr_alice[3] int
    var arr_bob[3] int
    var score_alice,score_bob int
    
    fmt.Scan(&arr_alice[0],&arr_alice[1],&arr_alice[2])
    fmt.Scan(&arr_bob[0],&arr_bob[1],&arr_bob[2])

    for i:=0;i<3;i++{
       if arr_alice[i] > arr_bob[i] {
            score_alice++
        }else if arr_bob[i] > arr_alice[i] {
            score_bob++
        }
    }

    fmt.Println(score_alice,score_bob)
}
