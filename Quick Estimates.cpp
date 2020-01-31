// Using strings to and the .size() member function to determine the magnitude of the int

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        cout << x.size() << endl;
    }
    
    return 0;
}
