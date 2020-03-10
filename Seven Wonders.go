package main

import "fmt"

func main() {
    var cards string
    card := [3]int{0, 0, 0}       // we store the number of each card in an array
    fmt.Scan(&cards)              // we store the input as a string
    for i := 0; i < len(cards); i++ {   // looping through the string, we add up the number of each card
        switch cards[i] {
            case 84:              // ASCII number is used as this is the return value when we do string[index]
                card[0]++
            case 67:
                card[1]++
            case 71:
                card[2]++
        }
    }
    smallest := card[0]         // we then loop through the array to find the smallest number of cards
    for _, c := range card {
        if (c < smallest) {
            smallest = c
        }
    }
    points := 0
    if smallest > 0 {           // if the smallest is not 0, there is a set of 3
        points = card[0]*card[0] + card[1]*card[1] + card[2]*card[2] + 7 * smallest
    } else {
        points = card[0]*card[0] + card[1]*card[1] + card[2]*card[2]
    }
    
    fmt.Println(points)
}
