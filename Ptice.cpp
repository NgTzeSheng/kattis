// Use a circular buffer to represent the sequences and a counter for each correct answer.
// A simple sorting to find the highest number of correct answers.
// If a, b or g is == to highest, print their names

#include <iostream>

using namespace std;

int main() {
    
    char adrian[3] = {'A', 'B', 'C'};
    char bruno[4] = {'B', 'A', 'B', 'C'};
    char goran[6] = {'C', 'C', 'A', 'A', 'B', 'B'};
    
    int n, a = 0, b = 0, g = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        char ans;
        cin >> ans;
        
        if (ans == adrian[i % 3]) {
            a++;
        }
        
        if (ans == bruno[i % 4]) {
            b++;
        }
        
        if (ans == goran[i % 6]) {
            g++;
        }
    }
    
    int score[3] = {a, b, g};
    
    int highest = 0;
    
    for (int j : score) {
        if (j > highest) {
            highest = j;
        }
    }
    
    cout << highest << endl;
    
    if (highest == a) {
        cout << "Adrian" << endl;
    }
    if (highest == b) {
        cout << "Bruno" << endl;
    }
    if (highest == g) {
        cout << "Goran" << endl;
    }
    
    return 0;
}
