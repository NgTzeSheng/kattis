// Since the order flows in a b c, there are only a total of 8 outcomes.
// Either the equal sign is in between a and b, or between b and c.
// We then check the conditionals for the 4 operators to see if the expression is true.

#include <iostream>

using namespace std;

int main() {
    
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c) {
        cout << a << '+' << b << '=' << c;
    }
    else if (a - b == c) {
        cout << a << '-' << b << '=' << c;
    }
    else if (a * b == c) {
        cout << a << '*' << b << '=' << c;
    }
    else if (a / b == c) {
        cout << a << '/' << b << '=' << c;
    }
    else if (b + c == a) {
        cout << a << '=' << b << '+' << c;
    }
    else if (b - c == a) {
        cout << a << '=' << b << '-' << c;
    }
    else if (b * c == a) {
        cout << a << '=' << b << '*' << c;
    }
    else if (b / c == a) {
        cout << a << '=' << b << '/' << c;    
    }
    
    return 0;
}
