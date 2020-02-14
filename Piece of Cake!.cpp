// Take the largest h and largest v to calculate the largest volume of cake.

#include <iostream>

using namespace std;

int main() {
    
    int n, h, v;
    cin >> n >> h >> v;
    if (h <= n/2) {
        h = n - h;
    }
    if (v <= n/2) {
        v = n - v;
    }
    cout << 4 * v * h;

    return 0;
}
