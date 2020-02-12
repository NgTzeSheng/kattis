// If else conditional to determine relevant output.

#include <iostream>

using namespace std;

int main() {
    
    int n, m;
    cin >> n >> m;
    
    int x = m - n;
    
    if (x == 1) {
        cout << "Dr. Chaz will have " << 1 << " piece of chicken left over!";
    }
    else if (x >= 0) {
        cout << "Dr. Chaz will have " << x << " pieces of chicken left over!";
    }
    else if (x == -1) {
        cout << "Dr. Chaz needs " << 1 << " more piece of chicken!";
    }
    else {
        cout << "Dr. Chaz needs " << x * -1 << " more pieces of chicken!";
    }
    
    return 0;
}
