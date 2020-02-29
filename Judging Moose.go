// If else conditionals to determine the different cases
// (is a moose?)  (is an even moose?)
// Finally simple comparison of larger value to output the number of points of the moose

package main

import (
	"fmt"
)

func main() {
	var l, r int
	fmt.Scan(&l)
	fmt.Scan(&r)
	if l == r {
	    if (l == 0) {
	        fmt.Println("Not a moose")
	    } else {
	        fmt.Printf("%s  %d", "Even", 2 * l)
	    }
	} else {
	    fmt.Println("Odd ")
	    if l > r {
	        fmt.Println(2 * l)
	    } else {
	        fmt.Println(2 * r)
	    }
	}
}
