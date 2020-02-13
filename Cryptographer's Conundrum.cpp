// Using a circular buffer for the "PERPERPER..." pattern.
// We compare the input string to the pattern.
// If the letter already corresponds, we need not change it. Else, we change that letter, taking up one day (day++).

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string per = "PER";
    string x;
    int days = 0;
    getline(cin, x);
    for (int i = 0, j = x.length(); i < j; i++) {
        if (x[i] != per[i % 3]) {
            days++;
        }
    }
    cout << days;

    return 0;
}
