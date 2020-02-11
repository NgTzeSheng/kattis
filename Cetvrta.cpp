// In a rectangle, we will have a total of 4 coordinates => 4 x coordinates, 4 y coordinates.
// Out of which, 2 will be the same. Meaning, we will only have 2 unique x coordinates and 2 unique y coordinates.
// We use two maps, one to store x coordinates and the other to store y coordinates. (map structure: coordinate:int)
// We cycle through the inputs, and input them into their respective maps.
// When two of the same x coordinates has been inserted to the map, we remove that key-value pair.
// Since we only have 3 coordinates, there will be 1 key-value pair left in the map, with the other already being removed
// as it appears twice.
// Hence, the last x coordinate will be the only key in the x coordinate map and the last y will also be ....


#include <iostream>
#include <map>

using namespace std;

int main() {
    
    map<int, int> x_cords;
    map<int, int> y_cords;
    for (int i = 0; i < 3; i++) {
        int x, y;
        cin >> x >> y;
        if (x_cords[x]) {  // x coordinate already recorded once
            x_cords.erase(x);
        }
        else {
            x_cords[x] = 1;
        }
        if (y_cords[y]) {  // x coordinate already recorded once
            y_cords.erase(y);
        }
        else {
            y_cords[y] = 1;
        }
    }
    int last_x = x_cords.begin() -> first;      // this -> arrow operator notation is to access members of a structure through a pointer.
    int last_y = y_cords.begin() -> first;      // The 'first' corresponds to the key of the key-value pair.
    cout << last_x << ' ' << last_y;            // To access members of a structure, use the dot operator.

    return 0;
}
