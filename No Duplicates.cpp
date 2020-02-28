// Since we are checking for duplicates, using a map can help us.
// Maps will not store duplicate keys and thus, if at the end, the number of keys does not equal the number of words,
// then it means that a word was repeated.

#include <iostream>
#include <map>

using namespace std;

int main() {
    
    map<string, int> words = {};
    string str = "";
    int count = 0;
    while (cin >> str) {
        words[str] = 1;
        count++;
    }
    
    if (words.size() != count) {
        cout << "no";
    }
    else {
        cout << "yes";
    }

    return 0;
}
