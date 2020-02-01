// Store inputs as int and float to save some memory, cast results to double for precision.
// Also remember to set precision of cout to ensure that the output is within accuracy specified.
// For N inputs/data points, there will be N - 1 trapezoids, hence the for loop runs N - 1 times.
// We use a circular buffer here because we need to store the data of the previous point on each calculation.
// cmath abs() helps ensure the time value is always positive given the nature of the circular buffer
// whereby the values alternate between time[0] and time[1].

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    double area = 0;
    
    int time[2];
    float glucose[2];
    
    cin >> time[0] >> glucose[0];
    
    for (int i = 1; i < n; i++) {
        cin >> time[i % 2] >> glucose[i % 2];
        
        area += double( (abs(time[0] - time[1])) * (0.5) * (glucose[0] + glucose[1]) );
    }
    
    cout.precision(5);
    
    cout << fixed << area / pow(10, 3);
    
    return 0;
}
