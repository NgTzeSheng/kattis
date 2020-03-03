// 

#include <iostream>
#include <map>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int s, length = 0;
        string x;
        cin >> s;
        if (s == 1) {             // if there is only one segment in the bag, we can't form a loop
            cin >> x;
        }
        else {
            map<int, int> blue, red;    // Using 2 maps, we split the ropes by colour and store their lengths as the key, count as value.
            int bsize = 0, rsize = 0;   // A map will help us to sort the length of the ropes in ascending order.
            for (int j = 0; j < s; j++) {
                cin >> x;
                if (x.back() == 'B') {      // if Blue colour, store to blue map.
                    x.pop_back();
                    blue[stoi(x)] += 1;
                    bsize++;
                }
                else {                      // if Red colour, store to red map.
                    x.pop_back();
                    red[stoi(x)] += 1;
                    rsize++;
                }
            }
            
            // Here we use a reverse iterator as we want to access the values in a descending order.
            map<int, int>::reverse_iterator itb = blue.rbegin(), itr = red.rbegin();
            int endp;           // We have an endp variable to keep track of when the ropes of a certain colour has been used up.
            if (bsize > rsize) {
                endp = rsize;
            }
            else {
                endp = bsize;
            }

            for (int k = 0; k < endp ; k++) {         // We loop through the map, in descending order,
                length += itb -> first + itr -> first;  // adding their lengths to a total count.
                if (itb -> second != 1) {
                    itb -> second -= 1;
                }
                else {
                    itb++;
                }
                if (itr -> second != 1) {   // This is to check if there are multiple value for the specific length
                    itr -> second -= 1;     // as maps do not allow us to store multiple keys. (e.g. 4R 4R 4R)
                }
                else {
                    itr++;
                }
            }
            length -= (endp * 2);       // The number of knots in the loop will be the number of ropes used.
        }                               // Since endp is half the number of ropes used, we multiply by 2. 
        
        cout << "Case #" << i + 1 << ": " << length << endl;
    }

    return 0;
}
