// Setting our grid to be a 2 dim array, we store the values in the map as follows:
// key: order which pivot was visited, value: position index on the grid.
// e.g. for the following sample input
// 6  1  9
// 5  2  8
// 4  3  7
// The key-value pairs would be:
/* {  6 : [0, 0],
      1 : [0, 1],
      9 : [0, 2],
      5 : [1, 0],
      2 : [1, 1],
      8 : [1, 2],
      4 : [2, 0],
      3 : [2, 1],
      7 : [2, 2]
   }  */

// Making use of how a map internally sorts the keys by ascending order, we use a circular buffer to compare the position index of 
// two digits at a time (in consecutive order).
// First comparision: 
// 1 : [0, 1] vs 2 : [1, 1]
// We can find their distance apart with pythagoras theorem, adding the calculated value to a total length counter.

#include <iostream>
#include <map>
#include <cmath>

using namespace std;

int main() {
    
    map<int, int[2]> grid;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int x;
            cin >> x;
            grid[x][0] = i;
            grid[x][1] = j;
            //cout << grid[x][0] << ' ' << grid[x][1] << endl;
        }
    }
    
    int buffer[2][2] = { {grid[1][0], grid[1][1]}, 0 };
    float length = 0;
    int k = 1;
    for (map<int, int[2]>::iterator it = ++grid.begin(), end = grid.end(); it != end; it++) {
        //cout << it -> first << ' ' << it -> second[0] << ", " << it -> second[1] << endl;
        buffer[k % 2][0] = it -> second[0];
        buffer[k % 2][1] = it -> second[1];
        int h = abs(buffer[0][0] - buffer[1][0]), w = abs(buffer[0][1] - buffer[1][1]);
        length += sqrt( (h * h) + (w * w) );
        k++;
    }
    cout.precision(6);
    cout << fixed << length;

    return 0;
}
