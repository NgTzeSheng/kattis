// Compare two strings whether the char is the same or not.

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        cout << a << endl << b << endl;
        for (int j = 0, k = a.length(); j < k; j++) {
            if (a[j] != b[j]) {
                cout << '*';
            }
            else {
                cout << '.';
            }
        }
        
        cout << endl << endl;
    }

    return 0;
}
