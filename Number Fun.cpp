// We run if else conditionals for all possible cases, comparing the values to c.
// Note the use of fabs() here instead of abs() as abs() only works with int as inputs.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        float a, b, c;
        cin >> a >> b >> c;
        if (a + b == c) {
            cout << "Possible" << endl;
        }
        else if ( fabs(a - b) == c ) {
            cout << "Possible" << endl;
        }
        else if (a * b == c) {
            cout << "Possible" << endl;
        }
        else if (a / b == c) {
            cout << "Possible" << endl;
        }
        else if (b / a == c) {
            cout << "Possible" << endl;
        }
        else {
            cout << "Impossible" << endl;
        }
    }
    
    return 0;
}
