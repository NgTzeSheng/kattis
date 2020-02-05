// By using a map data structure, we store the names of the cities as a key.
// Since keys are all unique, repeated cities will not duplicate.
// Finally, the total size (number of keys) in the map will correspond
// to the number of unique cities visited.

#include <iostream>
#include <map>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        map<string, int> cities;
        for (int j = 0; j < x; j++) {
            string y;
            cin >> y;
            cities.insert({y, 1});
        }
        cout << cities.size() << endl;
    }

    return 0;
}
