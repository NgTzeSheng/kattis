// Since this questions requires a storing of old values so that we do not double count the event days, we use a hash map.
// By initialising the key in the map to be the day, we cycle through all event days and return the size() of the map.
// This will give us the total number of unique days which is what's desired.

#include <iostream>
#include <map>

using namespace std;

int main() {
    
    map<int, int> days;
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int s, t;
        cin >> s >> t;
        for (int j = s; j <= t; j++) {
            days[j] = 1;
        }
    }
    cout << days.size();
    
    return 0;
}
