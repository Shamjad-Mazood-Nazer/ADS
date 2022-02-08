#include <stdio.h>

// Function to create the mountain
// sequence pattern
void printPatt(int n)
{
    int k1 = 3;
    int k2 = 3;
    int gap = 5;

    // Outer loop to handle the row
    for (int i = 1; i <= 3; i++) {

        // Inner loop to handle the
        // Column
        for (int j = 1;j <= (5 * n); j++)
        {
            if (j > k2 && i < 3)
            {
                k2 += gap;
                k1 += gap;
            }

            // Condition to print the
            // star in mountain pattern
            if (j >= k1 && j <= k2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        // Condition to adjust the value of
        // K1 and K2 for printing desire
        // Pattern
        if (i + 1 == 3)
        {
            k1 = 1;
            k2 = (5 * n);
        }
        else
        {
            k1 = 3;
            k2 = 3;
            k1--;
            k2++;
        }
        printf("\n");
    }
}

// Driver Code
int main()
{
    // Given Number N
    int N = 5;

    // Function call
    printPatt(N);
}
