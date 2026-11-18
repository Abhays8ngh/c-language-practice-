
#include <stdio.h>

int main()
{
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {3, 8, 9}
    };

    int t[3][3];
    int i, j;
    int sum1 = 0, sum2 = 0;

    // Transpose of matrix
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    // Primary diagonal sum
    for(i = 0; i < 3; i++)
    {
        sum1 = sum1 + a[i][i];
        sum2 = sum2 + a[i][2-i];
    }

    
    // Print transpose
    printf("Transpose of matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    printf("\nPrimary diagonal sum = %d\n", sum1);

    printf("Secondary diagonal sum = %d\n", sum2);

    return 0;
}
