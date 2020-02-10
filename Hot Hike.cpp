// We store all the maximum temperature forecasts into an array.
// We loop through the array, comparing only the temperatures of the first and third day (hiking days), storing
// the higher of the temperatures.
// If there is a temperature which is lower, we store that temperature instead (override) as well as store its index.
// Finally when the looping is complete and we have gone through each possible day for his hiking trip, we return the 
// index and temperature.

#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int temp[n];
    for (int i = 0; i < n; i++) {
        cin >> temp[i];
    }
    
    int index;
    n -= 2;
    int lowest = 41;                // temperature forecast is from -20 <= t <= 40
    int higher;
    for (int j = 0; j < n; j++) {
        if (temp[j] < temp[j + 2]) {
            higher = temp[j + 2];
        }
        else {
            higher = temp[j];
        }
        if (higher < lowest) {
            lowest = higher;
            index = j;
        }
    }
    cout << index + 1 << ' ' << lowest;
    
    return 0;
}
