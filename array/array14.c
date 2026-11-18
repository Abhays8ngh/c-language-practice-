#include <stdio.h>
int main() {
    /* 3-D array: 2 blocks, each block has 2 rows and 3 columns */
    int a[2][2][3] = {
        { {1, 2, 3},   {4, 5, 6}    },   /* block 0 */
        { {7, 8, 9},   {10, 11, 12} }    /* block 1 */
    };
    int i, j, k;
    printf("Elements of the 3-D array:\n");
    for (i = 0; i < 2; i++) {
        printf("Block %d:\n", i);
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; k++)
                printf("a[%d][%d][%d] = %d ", i, j, k, a[i][j][k]);
            printf("\n");
        }
    }
    /* Accessing one particular element */
    printf("\nElement at a[1][0][2] = %d\n", a[1][0][2]);
    return 0;
}