// Switch expression to check the last / last 2 chars of the first string.
// Add the extension accordingly

#include <iostream>
#include <string>

using namespace std;

string remove_vowel(string y, string p);

int main() {
    
    string y, p, extended;
    cin >> y >> p;
    int l = y.length();
    
    switch(y[l - 1]) {
        case 'e':
            extended = y + 'x' + p;
            break;
        case 'a':
            extended = remove_vowel(y, p);
            break;
        case 'i':
            extended = remove_vowel(y, p);
            break;
        case 'o':
            extended = remove_vowel(y, p);
            break;
        case 'u':
            extended = remove_vowel(y, p);
            break;
        case 'x':
            if (y[l - 2] == 'e') {
                extended = y + p;
            }
            else {
                extended = y + "ex" + p;
            }
            break;
        default:
            extended = y + "ex" + p;
            break;
    }
    cout << extended;
    
    return 0;
}

string remove_vowel(string y, string p) {
    y.pop_back();
    y = y + "ex" + p;
    return y;
}
