#include <iostream>
#include <map>

using namespace std;

typedef int (*func_array)(map<int, int> mymap, int length);   // defining a type called func_array, which is a pointer to a function
                                                              // which takes in a map and an int and returns an int.
int func1(map<int, int> mymap, int length);
int func2(map<int, int> mymap, int length);
int func3(map<int, int> mymap, int length);       // each function here corresponds to the required action needed to be performed
int func4(map<int, int> mymap, int length);       // as specified by the question
int func5(map<int, int> mymap, int length);

int main() {
    
    func_array functions[] = {    // this is our array of functions
        func1,
        func2,
        func3,
        func4,
        func5
    };
    
    int n, t;
    cin >> n >> t;
    map<int, int> mymap;
    for (int i = 0; i < n; i++) {     // we store the values of the array in a map data structure. Storing them as keys helps us to 
        int x;                        // sort them in ascending order as well (something which map does internally).
        cin >> x;
        mymap[x] += 1;
    } 
    int f = functions[t - 1](mymap, n);   // depending on the value of t (action), we run the appropriate function accordingly
    return 0;
}

int func1(map<int, int> mymap, int length) {
    for (map<int, int>::iterator it = mymap.begin(), it_end = mymap.end(); it != it_end; it++) {
        int b = 7777 - (it -> first);
        if (mymap.find(b) != it_end) {      // To check if x + y = 7777 exists. We take 7777 - x, and find if the result exists in our
            cout << "Yes";                  // map, looping x each time around to substitute each key value in our map.
            return 1;
        }
    }
    cout << "No";
    return 0;
}

int func2(map<int, int> mymap, int length) {    // since a map only stores unique key values, if the number of keys == length of inital
    if (mymap.size() == length) {               // array, it would mean that all the ints are unique.
        cout << "Unique";
        return 1;
    }
    cout << "Contains duplicate";
    return 0;
}

int func3(map<int, int> mymap, int length) {
    for (map<int, int>::iterator it = mymap.begin(), it_end = mymap.end(); it != it_end; it++) {
        if (it -> second > (float) length/2.0) {    
            cout << it -> first;      // since our map stores the value as the number of occurrences the key appears in the initial
            return 1;                 // array. We check if the value is greater than N/2, and if so, we output that int(key).
        }
    }
    cout << "-1";
    return 0;
}

int func4(map<int, int> mymap, int length) {    // first we calculate the median value, and count through the values in our map
    int median = length / 2 + 1;
    for (map<int, int>::iterator it = mymap.begin(), it_end = mymap.end(); it != it_end; it++) {
        if (median > it -> second) {
            median -= it -> second;
        }
        else {
            if (length & 1) {     // a nifty bitwise operator to check if length is even or odd. 
                cout << it -> first;
                return 1;
            }
            else {    // length is even.
                it--;
                cout << it -> first;
                it++;
                cout << ' ' << it -> first;
                return 1;
            }
        }
    }
    return 0;
}

int func5(map<int, int> mymap, int length) {      // since the length can range from 3 <= N <= 200 000, it is more efficient to run
    map<int, int>::iterator it_end = mymap.end(); // through 100 to 1000 than to check each value in the map (potentially 3 to 200 000 values)
    for (int i = 100; i < 1000; i++) {            // We find if the key(int from 100 to 1000) exists in our map, and if so, we print it.
        map<int, int>::iterator it = mymap.find(i);
        if (it != it_end) {
            while (it -> second > 0) {
                cout << it -> first << ' ';
                it -> second --;                // since map stores unique key values, we need to also account for values in the inital 
            }                                   // array which appears twice. 
        }                                       // (e.g. [100, 101, 101, 101, ....]) => we need to print 101 out more than just once.
    }
    return 0;
}
