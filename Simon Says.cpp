// We have a fixed prefix of "Simon says ", and by comparing this to the first 11 chars of the input string, we can
// determine whether or not to follow the instructions.
// If no, we ignore it and do nothing.
// If yes, we use an iterator, point it to the 12th char in the string (after the initial prefix) and then print the contents.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;     // using cin here is easier for integers as getline() returns the read input to a string.
    cin.ignore(); // this is to ignore the \n char that comes after the first input 
    string prefix = "Simon says "; // our prefix string to compare to
    
    for (int i = 0; i < n; i++) {
        string command;
        getline(cin, command);  // getline() will read up to the \n char (not including) and store 
                                // the \n is then discarded from the input stream.
        if (command.compare(0, 11, prefix) == 0) {      // here, compare(index char of *this, how many chars to compare, compare with which str)
            for (string::iterator i = command.begin() + 11; i != command.end(); i++) {
                cout << *i;
            }
            cout << endl;
        }
    }

    return 0;
}
