// The most optimal spot to park would be either at the storefront of the lowest int or highest int.
// That way, Michael only needs to walk down the street from the first to the last store once before returning to his car.
// We take in the inputs, storing them as either the biggest we've seen so far or the smallest.
// This will give us the smallest and largest values in the inputs.
// We then calculate the distance Michael needs to walk from the first store to the last * 2 (to and fro).

#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        int biggest = 0, smallest = 99;
        for (int j = 0; j < t; j++) {
            int x;
            cin >> x;
            if (x > biggest) {
                biggest = x;
            }
            if (x < smallest) {
                smallest = x;
            }
        }
        cout << (biggest - smallest) * 2 << endl;
    }
    
    return 0;
}
