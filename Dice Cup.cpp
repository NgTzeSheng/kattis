// If we draw out the probability table, we notice that there is a pattern in terms of which numbers get the highest probabilities.
//      1   2   3   4
//  1 | 2   3   4   5
//  2 | 3   4   5   6
//  3 | 4   5   6   7
//  4 | 5   6   7   8
//  5 | 6   7   8   9
//  6 | 7   8   9   10

// Taking note of the above, we notice that the numbers with the highest probabilities are those which have the longest digonal line
// In this case, the numbers are 5, 6, 7.
// By using this pattern, we realise that we just need to output numbers from (n + 1) to (m + 1).

#include <iostream>

using namespace std;

int main() {
    
    int n, m;
    cin >> n >> m;
    
    if (n > m) {
        int t = n;
        n = m;
        m = t;
    }
    
    for (int i = n + 1, j = m + 1; i <= j; i++) {
        cout << i << endl;
    }
    
    return 0;
}
