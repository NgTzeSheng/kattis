package main
import "fmt"

func main() {
    winners := make(map[string]string, 12)    // we store the winners in a map to avoid teams from the same University from winning
    var teams int
    var uni, team string
    fmt.Scan(&teams)                          // store total number of teams
    for i := 0; i < teams; i++ {              // and loop through each team
        if len(winners) == 12 {
            break                             // once we have 12 winners, we no longer need to continue looping through the teams
        }
        fmt.Scan(&uni)
        fmt.Scan(&team)
        if _, ok := winners[uni]; ok {        // if the University has already won a prize, we continue
            continue
        } else {
            winners[uni] = team
            fmt.Println(uni, team)            // if the University has not yet won, we store the winners to the map and print them
        }
    }
}
