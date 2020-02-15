// By adding up the lowest faces and highest faces, we calculate the highest value that they can roll.
// If both have the same value, it's a tie.
// Else, the winner is whoever has the larger value.

#include <iostream>

using namespace std;

int main() {
    
    int ga1, gb1, ga2, gb2, ea1, eb1, ea2, eb2;
    cin >> ga1 >> gb1 >> ga2 >> gb2 >> ea1 >> eb1 >> ea2 >> eb2;
    
    int gunnar = ga1 + ga2 + gb1 + gb2;
    int emma = ea1 + ea2 + eb1 + eb2;
    
    if (gunnar == emma) {
        cout << "Tie";
    }
    else if (gunnar > emma) {
        cout << "Gunnar";
    }
    else {
        cout << "Emma";
    }
    
    return 0;
}
