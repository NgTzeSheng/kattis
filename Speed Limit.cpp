#include <iostream>

using namespace std;

int main() {
    
    int n, s, t;
    cin >> n;
    
    while (n != -1) {     // when n = -1, we return
        int d = 0, t2 = 0;    // initialising distance d and time to 0
        for (int i = 0; i < n; i++) {
            cin >> s >> t;
            d += s * (t - t2);    // distance is speed * time, where time is total time elasped - previous time
            t2 = t;               // setting previous time
        }
        cin >> n;
        cout << d << " miles" << endl;
    }

    return 0;
}
