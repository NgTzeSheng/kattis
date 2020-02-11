// Simple recursive factorial function. Since the test case is at most 10, the largest possible outcome is 10! = 3628800, which
// we can store in an int.
// If a larger set of numbers were used, we may not be able to solve by this method due to space constraints.
// Since we only want the last digit, we return the answer % 10 which gives us the digit in the ones place.

#include <iostream>

using namespace std;

int factorial(int f);

int main() {
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int f;
        cin >> f;
        cout << factorial(f) % 10 << endl;
    }

    return 0;
}

int factorial(int f) {
    if (f == 1) {
        return 1;
    }
    else {
        return f * factorial(f - 1);    
    }
}
