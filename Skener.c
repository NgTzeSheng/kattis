// By using int division whereby an int is always returned, we can use this to help determine which char to display.
// We first store the input article in a 2 dimensional array.
// We run a loop r * zr * c * zc times, printing out the enlarged article.
// Each time, when we increment the for loop counter, to determine what char to display, we divide the counter
// by zr and zc respectively, and print the element in our original 2D array.

#include <stdio.h>

int main()
{
    int r, c, zr, zc;
    int check = scanf("%d %d %d %d", &r, &c, &zr, &zc);  
    // scanf() returns an int, the number of items of the argument list successfully read.
    
    if (check == 0)  // important to check that scanf() ran successfully, if not, to exit the program (fail).
    {
        return 1;   
    }
    
    int enlarged_r = r * zr;
    int enlarged_c = c * zc;
    
    char article[r][c];
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            char x;
            check = scanf(" %c", &x);  
            // note the space in front of %c, this is super important as scanf("%c") can 
            // actually take in whitespace ' ' or newline '\n' as an input.
            if (check == 0)
            {
                return 1;
            }
            article[i][j] = x;
        }
    }
    
    for (int k = 0; k < enlarged_r; k++)
    {
        for (int l = 0; l < enlarged_c; l++)
        {
            printf("%c", article[k/zr][l/zc]);    
        }
        printf("\n");
    }
    
    return 0;
}
