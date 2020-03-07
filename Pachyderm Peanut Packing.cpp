#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef struct Box {        // creating a user-defined data type to record the data of our boxes
    float x1, y1, x2, y2;
    string size;
} Box;

int main() {
    int n, m;
    vector<Box> boxes;
    while (true) {
        cin >> n;
        if (n == 0) {   // Input ends when n = 0
            break;
        }
        boxes.resize(n);  // resizing vector<Box> to the number of boxes
        Box box;
        for (int i = 0; i < n; i++) {
            cin >> box.x1 >> box.y1 >> box.x2 >> box.y2 >> box.size;    // Storing the data of the box to the vector
            boxes[i] = box;
        }
        cin >> m;   // m = number of peanuts
        float x, y;
        string size, status = "";
        for (int j = 0; j < m; j++) {   // we loop through each peanut
            cin >> x >> y >> size;
            for (int k = 0; k < n; k++) {   // and we compare each peanut to all the boxes in our vector<Box>
                if (x < boxes[k].x1 || x > boxes[k].x2 || y < boxes[k].y1 || y > boxes[k].y2) {     // peanut not in the box
                    continue;
                }
                if (boxes[k].size == size) {    // size of box and peanut is the same, hence the status is "correct"
                    status = "correct";
                }
                else {
                    status = boxes[k].size;   
                }
            }
            if (status == "") {   // peanut was not in any of the boxes, hence the status "floor"
                status = "floor";
            }
            cout << size << ' ' << status << endl;
            status = "";        // reset the status back to null
        }
        cout << endl;
    }
    
    return 0;
}
