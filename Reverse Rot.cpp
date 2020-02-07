// Here since we are not given the number of test cases, we use a while loop and only break when we input 0.
// First we store the string and convert each char to int (ASCII). We list the chars from 0 - 27, assigning ' ' and '.' values 26 and 27 respectively.
// We then do the rotation and then convert it back to the char form. Take care to covert the ' ' and '.' again.
// We then print the string in reverse format using an iterator.

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        
        string message;
        cin >> message;
        for (int i = 0; i < message.length(); i++) {
            int tmp;
            if (message[i] == '_') {
                tmp = 26;
            }
            else if (message[i] == '.') {
                tmp = 27;
            }
            else {
                tmp = (int) message[i] - 65;
            }
            
            tmp = (tmp + n) % 28 + 65;
            
            if (tmp == 91) {
                tmp = 95;
            }
            else if (tmp == 92) {
                tmp = 46;
            }
            
            message[i] = (char) tmp;
        }
        for (string::iterator i = message.end() - 1; i != message.begin() - 1; i--) {
            cout << *i;
        }
        cout << endl;
    }
    
    return 0;
}
