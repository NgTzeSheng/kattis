// by using a map, we store the remainder as the 'key'. The 'value' pair does not matter here.
// by using map.size(), we retrieve the number of unique 'keys', thereby solving our problem.

#include <iostream>
#include <map>

using namespace std;

int main() {
    
    map<int, int> count;
    
    for (int i = 0; i < 10; i++) {
        int a;
        cin >> a;
        
        int r = a % 42;
        
        count[r] = 1;
    }
    
    cout << count.size();
    
    return 0;
}
