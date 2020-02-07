// Take in the inputs and only count those which are expenses, meaning negative numbers.

#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    int expenses = 0;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < 0) {
            expenses += x;
        }
    }
    cout << expenses * -1;
    
    return 0;
}
