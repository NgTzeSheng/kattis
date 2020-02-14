// Since the inputs are not in a fixed format, we make use of regular expressions to determine the input type (string or int).
// By using getline() we store the entire line as an input string, and we run regex_match() to determine whether the input was
// a string int or a int string.
// The order tells us whether or not the int is the radius or the diameter.
// We then store the input into a map, with the int as the key (so that it is sorted) and the string as the value.
// Finally we output the colour (value) in ascending order of radius (key).

#include <iostream>
#include <map>
#include <regex>
#include <string>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    cin.ignore();           // for the newline character
    map<int, string> mymap;
    regex r("^[a-z]+.*");
    
    for (int i = 0; i < n; i++) {
        string x;
        getline(cin, x);
        int rd;
        char colour[21];
        if (regex_match(x, r)) {
            sscanf(x.c_str(), "%s %d", colour, &rd);
        }
        else {
            sscanf(x.c_str(), "%d %s", &rd, colour);
            rd /= 2;
        }
        mymap[rd] = colour;
    }
    for (map<int, string>::iterator it = mymap.begin(); it != mymap.end(); it++) {
        cout << it -> second << endl;
    }

    return 0;
}
