// Using x(t) = v * t * cosθ, we find the time at which the ball would have reached the hole in the wall.
// We then use the value of t in y(t) = v * t * sinθ − 0.5 * g * t * t, to find the height of the ball.
// We compare the height to check if there is clearance of 1 m and output the resulting "Safe" or "Not Safe" respectively.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    const float g = 9.81;
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        float v, theta, x, h1, h2, t, h;
        cin >> v >> theta >> x >> h1 >> h2;
        t = x / (v * cos(theta * M_PI / 180));
        h = v * t * sin(theta * M_PI / 180) - 0.5 * g * t * t;
        if (h >= h1 + 1 && h <= h2 - 1) {
            cout << "Safe" << endl;
        }
        else {
            cout << "Not Safe" << endl;
        }
    }
    return 0;
}
