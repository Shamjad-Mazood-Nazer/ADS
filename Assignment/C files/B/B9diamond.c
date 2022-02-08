
// CPP program to print a hollow pyramid pattern
#include <stdio.h>
void printPattern(int);
void main()
{
    int n = 6;
    printPattern(n);
    getch();
}
void printPattern(int n)
{
    int i, j, k = 0;
    for (i = 1; i <= n; i++) // row=6
    {
        // Print spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // Print #
        while (k != (2 * i - 1)) {
            if (k == 0 || k == 2 * i - 2)
                printf("*");
            else
                printf(" ");
            k++;
            ;
        }
        k = 0;
        printf("\n"); // print next row
    }
    // print last row
    for (i = 0; i < 2 * n - 1; i++) {
        printf("*");
    }
}
