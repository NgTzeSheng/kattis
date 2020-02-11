// We store the inputs as strings for easier comparision.
// Starting from the rightmost digit, we compare their ASCII values to determine the larger number.
// When determined, we print the string in reverse order with a decreasing for loop.

#include <iostream>
#include <string>

using namespace std;

void reverse(string str);

int main() {
    
    string a, b;
    cin >> a >> b;
    
    for (int i = 2; i >= 0; i--) {
        if ( (int) a[i] > (int) b[i] ) {
            reverse(a);
            return 0;
        }
        else if ( (int) a[i] < (int) b[i] ) {
            reverse(b);
            return 0;
        }
        else {
            continue;
        }
    }
    
    return 0;
}

void reverse(string str) {
    for (int i = str.length() - 1; i >= 0; i--) {
        cout << str[i];
    }
}
