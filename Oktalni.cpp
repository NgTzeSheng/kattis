// First we convert the input to a string, and add '0's to make the length divisible by 3.
// This allows us to consider 3 digits by 3 digits.
// Next, we evalue the group of 3 digits, converting them to a single digit (ranging 1 to 7)
// Lastly, we print this digit.

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string binary;
    cin >> binary;
    
    while (binary.length() % 3 != 0) {
        binary.insert(binary.begin(), '0');
    }
    
    for (int i = 0, j = binary.length(); i < j; i += 3) {
        int n = 0;
        if (binary[i] == '1') {
            n += 4;
        }
        if (binary[i + 1] == '1') {
            n += 2;
        }
        if (binary[i + 2] == '1') {
            n += 1;
        }
        cout << n;
    }
    
    return 0;
}
