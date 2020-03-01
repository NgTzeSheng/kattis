// We can build a closed track only if the number of initial "openings/connections" are even.
// That way, we can connect tracks from one opening to the other to close the loop.
// We use bitwise AND, to determine if the number is even or odd.

package main

import "fmt"

func main() {
   var x, y int
   fmt.Scan(&x)
   fmt.Scan(&y)
   if y & 1 == 1 {
       fmt.Println("impossible")
   } else {
       fmt.Println("possible")
   }
}
