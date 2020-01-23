#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // where n represents the number of integers to sort, in this case, n is 3
    int n = 3;
    
    // a vector is a dynamic array, meaning that it can resize itself automatically (inserted or deleted).
    // not the same as an array where only a given number of values can be stored under a single variable name.
    vector<int> numbers;
    numbers.resize(n);
    
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    // insert sorting algorithm here
    sort(numbers.begin(), numbers.end());
    
    // here, we are making use of the ASCII values of 'A', 'B' and 'C' (65, 66, 67 respectively),
    // to help us determine the order of which to print the values out
    // in the already sorted vector.
    char c;
    for (int k = 0; k < n; k++) {
        cin >> c;
        int a = c;
        cout << numbers[a - 65] << ' ';
    }
      
    return 0;
}
