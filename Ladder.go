// Simple math calculation with sin to find the length of hypotenuse (ladder)
// 

package main

import (
	"fmt"
	"math"
)

func main() {
	var h, v float64
	fmt.Scan(&h)
	fmt.Scan(&v)
	l := h / math.Sin(v * math.Pi / 180)
	x := int64(l) + 1
	fmt.Println(x)

}
