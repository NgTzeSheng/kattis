// We distinguish which inputs to add in and by how many to divide accordingly.
// Inputs of -1 are voided and not counted towards the total number of bases and counts.

#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int counted = 0;
    float bases = 0.0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x != -1) {
            counted++;
            bases += x;
        }
    }
    cout << bases / counted;

    return 0;
}
