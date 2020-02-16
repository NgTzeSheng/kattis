// We store the chess board in a 2 dim char array.
// We ensure that there are exactly 8 queens.
// Looping through the board, for each queen at position y and x, we check (solve).
// Solving involves checking horizontally, vertically and diagonally.
// If the queen is the only queen in those directions, then that case is successful.

#include <iostream>

using namespace std;

bool solve(int y, int x, char board[8][8]);
bool check_horizontal(int y, int x, char board[8][8]);
bool check_vertical(int y, int x, char board[8][8]);
bool check_diagonal(int y, int x, char board[8][8]);

int main() {
    
    char board[8][8];
    int num_queens = 0;     // queen counter
    for (int y = 0; y < 8; y++) {           // fill up the board
        for (int x = 0; x < 8; x++) {
            cin >> board[y][x];
            if (board[y][x] == '*') {
                num_queens++;
            }
        }
    }
    
    if (num_queens != 8) {    // checking for 8 queens
        cout << "invalid";
        return 0;
    }
    
    for (int y = 0; y < 8; y++) {
        for (int x = 0; x < 8; x++) {
            if (board[y][x] == '*') {     // looping through the board to find the position of the queens
                if (solve(y, x, board)) {

                }
                else {
                    cout << "invalid";
                    return 0;
                }
            }
        }
    }
    
    cout << "valid";

    return 0;
}

bool solve(int y, int x, char board[8][8]) {
    if (check_horizontal(y, x, board) && check_vertical(y, x, board) && check_diagonal(y, x, board)) {
        return true;
    }
    else {
        return false;   
    }
}

bool check_horizontal(int y, int x, char board[8][8]) {
    board[y][x] = '.';
    for (int i = 0; i < 8; i++) {
        if (board[y][i] == '*') {
            return false;
        }
    }
    board[y][x] = '*';
    return true;
}

bool check_vertical(int y, int x, char board[8][8]) {
    board[y][x] = '.';
    for (int i = 0; i < 8; i++) {
        if (board[i][x] == '*') {
            return false;
        }
    }
    board[y][x] = '*';
    return true;
}

bool check_diagonal(int y, int x, char board[8][8]) {
    board[y][x] = '.';
    int i = y;
    int j = x;
    while (i >= 0 && j >= 0) {          // checking diagonally North-West
        if (board[i][j] == '*') {
            return false;
        }
        i--;
        j--;
    }
    i = y;
    j = x;
    while (i <= 7 && j <= 7) {          // checking diagonally South-East
        if (board[i][j] == '*') {
            return false;
        }
        i++;
        j++;
    }
    i = y;
    j = x;
    while (i >= 0 && j <= 7) {          // checking diagonally North-East
        if (board[i][j] == '*') {
            return false;
        }
        i--;
        j++;
    }
    i = y;
    j = x;
    while (i <= 7 && j >= 0) {          // checking diagonally South-West
        if (board[i][j] == '*') {
            return false;
        }
        i++;
        j--;
    }
    board[y][x] = '*';
    return true;
}
