// By using bitwise operations, we check the LSB (Least Significant Bit) of N,
// whether it's a '1' or a '0' and we initialize that value to another int.

#include <iostream>

using namespace std;

int main() {
    
    int a, b = 0;
    
    cin >> a;
    
    while ( a != 0 ) { // until we finish going through all the bits 

        if (a & 1) {
        // this checks if N is odd, meaning the LSB is a '1'.
        // a & 1 => a (in binary) & 000000001
        // returns 1 (true) only if last digit is also a 1
        // else, returns 0 (false)
        
            b++;       // we add 1 here
        }
        
        b = b << 1;    // we bitwise left shift by 1, aka adding a zero
                       // this does not affect the b++ as that is a addition operator, not bitwise operator.
        a = a >> 1;    // bitwise right shift to check the next bit
    }
    
    cout << b;
    
    return 0; 
} 

// This problem led me to learn about bitwise operators ( ~, &, |, ^, >>, <<)  :)
