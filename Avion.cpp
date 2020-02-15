// Using regex to determine if "FBI" appears in the blimp code.

#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    
    regex r(".*(FBI).*");
    int count = 0;
    for (int i = 1; i <= 5; i++) {
        string blimp = "";
        cin >> blimp;
        if (regex_match(blimp, r)) {
            count++;
            cout << i << ' ';
        }
    }
    if (!count) {
        cout << "HE GOT AWAY!";
    }
    return 0;
}
