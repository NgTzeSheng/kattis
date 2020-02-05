#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_N 4
#define MAX_INPUT 122

int main() {
    
    char n_buf[MAX_N];
    if (fgets(n_buf, MAX_N, stdin) == NULL) return 1;
    int n;
    if (sscanf(n_buf, "%d", &n) != 1) return 1;
    
    for (int i = 0; i < n; i++) {
        char str[MAX_INPUT] = {0};
        if (fgets(str, MAX_INPUT, stdin) == NULL) return 1; 
        
        int arr[2] = {0, 0};
        double d = 0.0;
        int len = strlen(str);
        
        for (int i = 0; i < len - 1; i++) {
            if (str[i] == ' ') {
                arr[i % 2] = 91;
            }
            else if (str[i] == '\'') {
                arr[i % 2] = 92;
            }
            else {
                arr[i % 2] = (int) str[i];    
            }
            
            if (arr[1] == 0) {
                continue;
            }
            int tmp = abs( arr[0] - arr[1] );
            if (tmp > 14) tmp = 28 - tmp;
            d += tmp;
        }
        
        d *= 60 * M_PI / 28 / 15;
        d += len - 1;
        printf("%.10lf\n", d);
    }
    
    return 0;
}
