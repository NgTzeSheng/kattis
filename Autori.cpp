#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string long_variation;
    cin >> long_variation;
    
    cout << long_variation[0];
    
    for (int i = 1, j = long_variation.length(); i < j; i++) {
        if (long_variation[i] == '-') {
            cout << long_variation[i+1];
            i ++;
        }
    }

    return 0;
}
