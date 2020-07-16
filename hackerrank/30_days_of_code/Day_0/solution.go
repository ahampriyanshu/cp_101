package main

import (
    "fmt"
    "bufio"
    "os"
)

func main(){
   scanner := bufio.NewScanner(os.Stdin)
   scanner.Scan()
   text := scanner.Text()
   fmt.Printf("Hello, World.\n%s", text)
}