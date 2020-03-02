// We begin by listing the moves and their outcomes
// Position 1:
// A -> 2   B -> 1    C -> 3
// Position 2:
// A -> 1   B -> 3    C -> 2
// Position 3:
// A -> 3   B -> 2    C -> 1

// Converted to +- in positions, we have:
// A: +1, -1, 0
// B: 0, +1, -1
// C: +2, 0, -2
// Whereby the index of the above 3 arrays represent the current position numbers (minus 1, 0 index array)

// e.g. If current position is 1, and the move is 'A', new position will be 1 + A[1 - 1] => 2
//      If current position is 2, and the move is 'B', new position will be 2 + B[2 - 1] => 3

package main

import "fmt"

func main() {
    var a = [3]int{1, -1, 0}
    var b = [3]int{0, 1, -1}
    var c = [3]int{2, 0, -2}
    var moves string
    fmt.Scan(&moves)
    pos := 1
    for i, j := 0, len(moves); i < j; i++ {
        switch moves[i] {     // cases are in ASCII numbers (return value of string[] operator)
            case 65:
                pos += a[pos - 1]
            case 66:
                pos += b[pos - 1]
            case 67:
                pos += c[pos - 1]
        }
    }
    fmt.Println(pos)
}
