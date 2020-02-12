// Switch expression to add the relevant points accordingly.
// We store the card as a string to allow us to compare by the individual characters.

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n, points = 0;
    char b;
    cin >> n >> b;
    n *= 4;
    for (int i = 0; i < n; i++) {
        string card;
        cin >> card;
        switch (card[0]) {
            case 'A':
                points += 11;
                break;
            case 'K':
                points += 4;
                break;
            case 'Q':
                points += 3;
                break;
            case 'J':
                if (card[1] == b) {
                    points += 20;
                }
                else {
                    points += 2;
                }
                break;
            case 'T':
                points += 10;
                break;
            case '9':
                if (card[1] == b) {
                    points += 14;
                }
                break;
            case '8':
                break;
            case '7':
                break;
        }
    }
    cout << points;
    
    return 0;
}
