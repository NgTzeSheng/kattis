// As we cycle through the inputs, we create a map and store the menu items as the keys. 
// This ensures that menu items will not be duplicated.
// For the values, we store another map, this time, with the names as the keys.
// This way, both the menu items and names will be sorted lexicographically internally by map.


#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

vector<string> split(string str, string delim);

int main() {
    
    while (true) {
        int n;
        cin >> n;
        cin.ignore();
        if (n == 0) {
            break;
        }
        
        map<string, map<string, int>> order_list;
        
        for (int i = 0; i < n; i++) {
            string str, name;
            getline(cin, str);    // getting the entire order from one customer
            vector<string> split_str = split(str, " ");   // splitting the order into individual words.
            name = split_str[0];    // the first string in the vector of strings will be the name.
            for (int j = 1; j < split_str.size(); j++) {
                order_list[split_str[j]][name] = 1;        // adding the name to the ordered menu item
            }                     // in the expression, we store the menu item as the key, and the value is (key: name, value: 1).
        }
        for (map<string, map<string, int>>::iterator it = order_list.begin(); it != order_list.end(); it++) {   // looping the data structure
            cout << it -> first << ' ';                                                                         // to print desired outcome
            for (map<string, int>::iterator it2 = it->second.begin(); it2 != it->second.end(); it2++) {
                cout << it2 -> first << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }
    
    return 0;
}

vector<string> split(string str, string delim) {
    vector<string> split_strs;
    string sub_string;
    do {
        sub_string = str.substr(0, str.find(delim));    // extract the word
        split_strs.push_back(sub_string);               // add the word to the vector
        str.erase(0, sub_string.length() + 1);          // erase the word from original long string
    }
    while (str.length() != 0);
    
    return split_strs;
} 
