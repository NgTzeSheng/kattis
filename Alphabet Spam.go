// We loop through the elements, using if else conditionals to tally the number of elements in each category
// Finally we calculate and output their ratios

package main

import "fmt"

func main() {
    var sentence string
    ratio := [4]int{0, 0, 0, 0}
    fmt.Scan(&sentence)
    length := len(sentence)
    for i := 0; i < length; i++ {
        if sentence[i] == 95 {                                  // whitespace
            ratio[0]++
        } else if sentence[i] >= 97 && sentence[i] <= 122 {     // lowercase
            ratio[1]++
        } else if sentence[i] >= 65 && sentence[i] <= 90 {      // uppercase
            ratio[2]++
        } else {                                                // symbol
            ratio[3]++
        }
    }
    for _, element := range ratio {
        fmt.Println(float64(element)/float64(length))
    }
}
