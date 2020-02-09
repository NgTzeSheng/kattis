// Since we need to keep track of unique items, we use a map.
// Cycling through each day where he replaces a new part, we store that in the map.
// Replacing a part which was previously replaced will not change the size of the map as no new Key was inserted.
// When the size of the map corresponds with the number of parts in the boat, we return the day (i + 1, because i starts from 0).

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    
    int p, n;
    cin >> p >> n;
    map<string, int> part_names;
    
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        part_names[name] = 1;
        if (part_names.size() == p) {
            cout << i + 1;
            return 0;
        }
    }
    cout << "paradox avoided";
    
    return 0;
}
