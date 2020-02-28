// We calculate the sum of grades of each contestant and store the biggest (with its index).
// Everytime a new contestant scores a higher score than the previous highest, we store the contestant's score and number (index) 

#include <iostream>

using namespace std;

int main() {
    
    int biggest = 0;
    int winner = 0;
    
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            int x = 0;
            cin >> x;
            sum += x;
        }
        if (sum > biggest) {
            biggest = sum;
            winner = i;
        }
    }
    
    cout << winner + 1 << ' ' << biggest;

    return 0;
}
