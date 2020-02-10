// This problem requires knowledge of Brahmagupta's formula
// https://www.geeksforgeeks.org/maximum-area-quadrilateral/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double a, b, c, d, s; // s is semiperimeter
    cin >> a >> b >> c >> d;
    
    s = (a + b + c + d) / 2;
    
    cout.precision(6);
    cout << fixed << sqrt((s - a) * (s - b) *  (s - c) *  (s - d));
  
    return 0;
}
