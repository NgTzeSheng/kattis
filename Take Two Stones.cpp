// A simple check if the number is odd or even.

#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    if (n & 1) {
        cout << "Alice";
    }
    else {
        cout << "Bob";
    }
    
    return 0;
}
