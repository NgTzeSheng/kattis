// We store the input as both an int and string.
// Using the string form, we cycle through each digit to find the total sum of digits.
// We then loop and multiply the int form with an increasing counter, checking if the sum of digits of their product is equal to 
// the initial sum of digits.
// If equal, we break out of the loop and return the counter.

#include <iostream>
#include <string>

using namespace std;

int sum_of_digits(string str);

int main() {
    
    while (true) {
        int n;
        string nstr;
        cin >> n;
        if (n == 0)  {
            return 0;
        }
        nstr = to_string(n);
        
        int sum = sum_of_digits(nstr);
        
        int i = 11, nsum;
        do {
            nsum = 0;
            nsum = sum_of_digits( to_string(n * i) );
            i++;
        }
        while (nsum != sum);
        cout << i - 1 << endl;
    }
    
    return 0;
}

int sum_of_digits(string str) {
    int sum = 0;
    for (int i = 0, j = str.length(); i < j; i++) {
        sum += (int) str[i] - 48;
    }
    return sum;
}
