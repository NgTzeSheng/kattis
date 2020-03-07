// Traversing char by char, we compare it's value to the previous to decide whether or not to add it to the back of our string.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string y;
    char x;
    while (cin >> x) {
        if (y.back() == x) {
            continue;
        }
        y.push_back(x);
    }
    cout << y << endl;
    return 0;
}
