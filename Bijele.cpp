// given 2 arrays of int, find the difference between each values.

#include <iostream>

using namespace std;

int main() {
    // the correct number of each piece he should have
    int correct[6] = { 1, 1, 2, 2, 2, 8 };
    
    int a;
    int difference[6];
    
    for (int i = 0; i < 6; i++) {
          cin >> a;
          difference[i] = correct[i] - a;
    }
    
    for (int j : difference) {
        cout << j << ' ';
    }
    
    return 0;
}
