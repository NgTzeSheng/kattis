package main

import "fmt"

func main() {
    var x float64
    fmt.Scan(&x)
    x = x * 1000 * 5280 / 4854 + 0.5  // the 0.5 is to round up the number to the nearest integer
    fmt.Println(int(x))               // in Go, we explicitly cast from float to int
}
