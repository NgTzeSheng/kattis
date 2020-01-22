/*
This problem involves math, specifically, geometric progression.

Iterations (n) : 0     1     2     3     4     5
Points:          4     9     25    81    289   1089
simplified (p) : 2^2   3^3   5^2   9^2   17^2  33^2

If we notice, the square root of the number of points follows a GP:
When n = 0, p = 2 + 0 = 2;
When n = 1, p = 2 + 1 = 3;
When n = 2, p = 2 + 1 + 2 = 5;
When n = 3, p = 2 + 1 + 2 + 4 = 9;

If we notice the second half, it is a GP: 1, 2, 4, 8, ...  (a = 1, r = 2)
Sum of GP = a(r^n - 1) / (r - 1) => (2^n - 1)

Hence, the solution can be found via:

[ 2 + (2^n - 1) ]^2

*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    // pow(base, exponent)
    int num = 2 + (pow(2, n) - 1);
    
    // cast to an int as pow() returns a float. If we do no specify the precision, we get a rounded answer
    // e.g. when n = 15, p = 1.07381e+09
    cout << (int) pow(num, 2) << endl;

    return 0;
}
