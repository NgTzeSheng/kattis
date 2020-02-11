// We store the board in a 2 dim array.
// As we store the numbers for each row, we also check for the conditions of same number of black and white and whether there are 
// consecutive appearances of the tiles.
// We then loop through by column to check the same conditions.
// It is important to note that when check for consecutive, we have to check the condition that j > 1 and i > 1.
// This is to ensure that we are comparing within the SAME row and column respectively.
// Without these conditions, we may end up comparing the first element of the row, with the last two elements of the previous row.

#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    char board[n][n] = {0};
    int black = 0, white = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
            if (board[i][j - 2] == board[i][j - 1] && board[i][j - 1] == board[i][j] && j > 1) {  // checking consecutive for row
                cout << 0;
                return 0;
            }
            if (board[i][j] == 'B') {
                black++;
            }
            else {
                white++;
            }
        }
        if (white != black) {   // checking same white and black for row
            cout << 0;
            return 0;
        }
        else {
            white = 0;
            black = 0;
        }
    }
    
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            if (board[i - 2][j] == board[i - 1][j] && board[i - 1][j] == board[i][j] && i > 1) {  // checking consecutive for column
                cout << 0;
                return 0;
            }
            if (board[i][j] == 'B') {
                black++;
            }
            else {
                white++;
            }
        }
        if (white != black) {   // checking same white and black for column
            cout << 0;
            return 0;
        }
        else {
            white = 0;
            black = 0;
        }
    }
    cout << 1;
    return 0;
}
