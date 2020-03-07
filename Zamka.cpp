// The program increments L and decrements D by 1 each time, checking if the sum of their digits add up to X.

#include <iostream>
#include <string>

using namespace std;

int sumOfDigits(int y);

int main() {
    int l, d, x;
    cin >> l >> d >> x;
    while (sumOfDigits(l) != x) {
        l++;
    }
    while (sumOfDigits(d) != x) {
        d--;
    }
    cout << l << endl << d << endl;
    return 0;
}

int sumOfDigits(int y) {
    int sum = 0;
    while (y > 0) {
        sum += y % 10;
        y = y / 10;
    }
    return sum;
}
