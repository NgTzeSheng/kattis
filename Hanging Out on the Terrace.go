// We maintain a count of he number of people on the terrance to ensure it does not cross the limit.
// If else conditional to check event status (enter or leave)
// Another if else conditional to check if the new count of people would exceed the limit.
// Everytime an "exceeds" occur, we increment a denied count (dcount)
// Finally we output the dcount.

package main

import "fmt"

func main() {
   var l, x int
   fmt.Scan(&l)
   fmt.Scan(&x)
   pcount := 0
   dcount := 0
   for i := 0; i < x; i++ {
       var event string
       var y int
       fmt.Scan(&event)
       fmt.Scan(&y)
       if event == "enter" {
           if pcount + y <= l {
               pcount += y
           } else {
               dcount++
           }
       } else {
           pcount -= y
       }
   }
   fmt.Println(dcount)
}
