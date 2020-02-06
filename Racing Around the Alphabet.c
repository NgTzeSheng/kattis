// Since the setup is in a circle with letters ranging A - Z, space, ', we can use their ASCII values to determine their distances apart.
// We first read and store the input strings, comparing adjacent chars using a circular buffer.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_N 4  // This is 4 because the first line of input ranges from 1 - 20 and in the case whereby there are 2 digits, the 
                 // input read by fgets() will be ['2', '0', '\n', '\0']. If this was given a value of 3, this would be the 
                 // resulting outcome: ['2', '0', '\0'] with the \n char left on the input stream.
                 // This results in the next line of fgets() called to read only '\n', resulting in a wrong answer.
#define MAX_INPUT 122 // Same goes for the strings which range from 8 - 120 inclusive. The 121st element is reserved for '\n' if any
                      // followed by the 122nd for the null terminating '\0'.

int main() {
    
    char n_buf[MAX_N];
    if (fgets(n_buf, MAX_N, stdin) == NULL) return 1;  // fgets() reads the input line for up to MAX_N chars or until a \n is read.
    int n;                                             // The '\n' char is stored in the input string as well. Otherwise it would be
    if (sscanf(n_buf, "%d", &n) != 1) return 1;        // left on the input stream and the next fgets() will read only '\n'.
    // Since fgets() stores the input as a string, we use sscanf() to read that string, formatted to integer.
    for (int i = 0; i < n; i++) {
        char str[MAX_INPUT] = {0};
        if (fgets(str, MAX_INPUT, stdin) == NULL) return 1; 
        
        int arr[2] = {0, 0};  // circular buffer
        double d = 0.0;
        int len = strlen(str);
        
        for (int i = 0; i < len - 1; i++) {
            if (str[i] == ' ') {  // converting whitespace to ascii value 91 (after Z: 90)
                arr[i % 2] = 91;
            }
            else if (str[i] == '\'') {  // converting ' to ascii value 92 (after space: 91)
                arr[i % 2] = 92;
            }
            else {
                arr[i % 2] = (int) str[i];  // converting to ascii value
            }
            
            if (arr[1] == 0) {  // for the first element, we continue as we need to insert the second element to compare.
                continue;
            }
            int tmp = abs( arr[0] - arr[1] );  // Taking the absolute value in case of negative values
            if (tmp > 14) tmp = 28 - tmp;  // If greater than 14, we take 28 - value to signify going round the circle in the other direction
            d += tmp;
        }
        
        d *= 60 * M_PI / 28 / 15;
        d += len - 1;
        printf("%.10lf\n", d);
    }
    
    return 0;
}
