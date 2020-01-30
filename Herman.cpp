// by drawing out some simple graphical representations, you'll realise that in 
// taxicab geometry, the 'circle' is actually represented by a square because of
// the constant R.

// Hence to calculate its area, it is 2 x area of triangle
// 2 x 1/2 x base x height => 2R x R => 2R^2

#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double r; // a double is used here for greater precision, thus not requiring pow()
    cin >> r;
    cout.precision(4);
    
    cout << fixed << M_PI * r * r << endl; // if pow is used, using a float r is fine as pow returns a double
    
    cout << fixed << 2 * r * r << endl;
    
    return 0;
}
