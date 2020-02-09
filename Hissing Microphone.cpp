// Use a circular buffer to keep track of the current and previous value in the string.
// If 2 consecutive 's' appears, the sum of the buffer will be 2 and we output "hiss".
// Else, we output "no hiss" and the program ends

#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;
    int s[2] = {0, 0};
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 's') {
            s[i % 2] = 1;
            if (s[0] + s[1] == 2) {
                cout << "hiss";
                return 0;
            }
        }
        else {
            s[(i - 1) % 2] = 0;
        }
    }
    cout << "no hiss";    
    
    return 0;
}
