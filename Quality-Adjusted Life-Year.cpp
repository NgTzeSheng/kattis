// Simple counter to add up all the sums of products between q and y.

#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    float qaly = 0;
    for (int i = 0; i < n; i++) {
        float q, y;
        cin >> q >> y;
        qaly += q * y;
    }
    cout.precision(3);
    cout << fixed << qaly;

    return 0;
}
