// By writing out a few lines of workings, we realise that the next value of B is the sum of the current values of A and B. 
// And the next value of A is the current value of B.
// e.g.
//  A   |   B
//  0       1
//  1       1
//  1       2
//  2       3
//  3       5
//  5       8
//  ...     ...

// To find the next B: take current A + B
// To find the next A: take current B

// For the number of times the button was pressed, we calculate the values of A and B accordingly.


#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    if (n == 1) {
        cout << 0 << ' ' << 1;
        return 0;
    }
    int a = 0, b = 1, tmp = 0;
    for (int i = 1; i < n; i++) {
        tmp = b;
        b = a + b;
        a = tmp;
    }
    cout << a << ' ' << b;
    
    return 0;
}
