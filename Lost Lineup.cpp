// In this problem set, we make use of maps which internally stores its keys in a sorted ascending order.
// We store the number of spaces the i-th person is from Jimmy as the key, and the position they are now in as the value.
// e.g.
// 4
// 1 2 0
// There are 4 ppl in line with Jimmy as the first person.
// The 2nd person is supposed to be 1 space away, the 3rd is 2 spaces away and the 4th is 0 spaces away from Jimmy.
// Hence, the order should be Jimmy, 4th person, 2nd person, 3rd person.
// Ans: 1 4 2 3

// By storing the number of spaces away as the key, and their current position as the value, the map will help us to internally
// sort by ascending order.
// { 1 : 2,                             { 0 : 4,
     2 : 3,   will be sorted to become    1 : 2,
     0 : 4, }                             2 : 3 }
     
// We then output the second value of the map in order.

#include <iostream>
#include <map>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    map<int, int> sorted;
    for (int i = 2; i < n + 1; i++) {
        int d;
        cin >> d;
        sorted[d] = i;
    }
    
    cout << 1 << ' ';
    for (map<int, int>::iterator it = sorted.begin(); it != sorted.end(); it++) {
        int x = it -> second;
        cout << x << ' ';
    }
    return 0;
}


