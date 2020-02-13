// We store the company values in a map <company number, position>.
// Depending on the request type (1 or 2), we either:
// Request 1: we change the position of that company (change the value in the map where the key corresponds to that company).
// Request 2: we calculate the absolution difference in the values (distance) between company A and B.

#include <iostream>
#include <cstdlib>
#include <map>

using namespace std;

int main() {
    
    int n, q;
    cin >> n >> q;
    map<int, int> mymap;
    for (int i = 1; i <= n; i++) {
        cin >> mymap[i];
    }
    for (int j = 0; j < q; j++) {
        int query;
        cin >> query;
        if (query == 1) {
            int c, x;
            cin >> c >> x;
            mymap[c] = x;
        }
        else {
            int a, b, dist;
            cin >> a >> b;
            dist = abs(mymap[a] - mymap[b]);
            cout << dist << endl;
        }
    }

    return 0;
}
