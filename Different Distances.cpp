// Use the mathematical equation given to compute the answer.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double x1, y1, x2, y2, p;
    while (true) {
        cin >> x1 >> y1 >> x2 >> y2 >> p;
        if (!x1) {
            return 0;
        }
        x1 = abs(x1 - x2);
        y1 = abs(y1 - y2);
        cout.precision(4);
        cout << fixed << pow( ( pow(x1, p) + pow(y1, p) ) , 1/p) << endl;
    }

    return 0;
}
