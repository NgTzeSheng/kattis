// Read and store as a string. Check which is the last char (remember that \n might be stored as well).
// Remove last char and store into a separate int. (Convert both to ints)
// Calculate the power and add to a counting total.

#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX_N 4
#define MAX_INPUT 6

int main() {
    
    char n_buf[MAX_N];
    if (fgets(n_buf, MAX_N, stdin) == NULL) return 1;
    int n;
    if (sscanf(n_buf, "%d", &n) != 1) return 2;
    
    double total;
    
    for (int i = 0; i < n; i++) {
        char p_buf[MAX_INPUT];
        if (fgets(p_buf, MAX_INPUT, stdin) == NULL) return 2;
        int p, power;
        
        int lastc;
        if (p_buf[strlen(p_buf) - 1] == '\n') {           // newline char was read and stored
            lastc = 2;
        }
        else {                                            // no newline char was read and stored
            lastc = 1;
        }
        
        power = (int) p_buf[strlen(p_buf) - lastc] - 48;
        p_buf[strlen(p_buf) - lastc] = '\0';
        if (sscanf(p_buf, "%d", &p) != 1) return 3;
        
        total += pow(p, power);
    }
    
    printf("%.0lf\n", total);
    
    return 0;
}
