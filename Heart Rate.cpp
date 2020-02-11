// To calculate the minimum APBM, it is derived from the assumption that when t = 0, the first beat is recorded, and when t = p,
// the last beat is recorded.
//  e.g. b = 6, p = 5.
//  |___|___|___|___|___|  (| are the beats, ___ is the time between each beat)
//  in the e.g. above, we have 6 beats recorded in 5s.

// The amount of time between each beat is 1 second (5beats/5seconds), we divide 5 seconds by the number of ___.
// Min APBM = 60/t, => 60.0000

// To calculate the calculated BPM, we use the formula given of 60b/p.
// Calculated BPM = 60 * b / p, => 72.0000


// To calculate maximum APBM, the assumption of the recording is as follows:
//  ___|___|___|___|___|___|___
// |                           |
// Here, we notice that when t = 0, the first beat is not recorded. And when t = p, the last beat is also missed.
// Hence, t = 5 seconds / 7
// Max APBM = 60/t, => 84.0000

#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int b;
        float p;
        cin >> b >> p;
        cout.precision(4);
        cout << fixed << 60 * ((b - 1) / p) << ' ' << 60 * b / p << ' ' << 60 * ((b + 1) / p) << endl;
    }

    return 0;
}
