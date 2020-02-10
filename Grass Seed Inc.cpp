// Calculate the total area of all the lawns and multiply by the cost per square metre.

#include <iostream>

using namespace std;

int main() {
    
    float c, l;
    cin >> c >> l;
    
    float area = 0;
    for (int i = 0; i < l; i++) {
        float w, h;
        cin >> w >> h;
        area += w * h;
    }
    cout.precision(6);
    cout << fixed << area * c;

    return 0;
}
