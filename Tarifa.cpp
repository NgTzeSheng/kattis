// We count the total amount of unused data per month and add them up.
// Finally for the N+1 month, we add the fresh data he can use for that month.

#include <iostream>

using namespace std;

int main() {
    
    int x, n;
    cin >> x >> n;
    
    int d = 0;
    for (int i = 0; i < n; i++) {
        int y;
        cin >> y;
        d += x - y;
    }
    d += x;
    cout << d;

    return 0;
}
