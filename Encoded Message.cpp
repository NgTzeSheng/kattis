// The square root of the length of the string will be the size of the square.
// Visualized in a 1 dimemsional array, for a square of size 5, we need to output the chars in the following order,
// 4, 9, 14, 19, 24, 3, 8, 13, 18, 23, 2 ...
// Here we notice the count starts at 4, plus 5, continue if < 25, then 3, plus 5, continue if < 25, then 2, plus 5...
// We can construct a for loop to count in this manner, outputting the char at that position.

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string e_message;
        cin >> e_message;
        int length = e_message.length();
        int square = sqrt(length);
        for (int j = square - 1; j >= 0; j--) {
            for (int k = 0; k < length; k += square) {
                cout << e_message[k + j];
            }
        }
        cout << endl;
    }

    return 0;
}
