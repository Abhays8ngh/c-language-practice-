#include <stdio.h>

int main() {
    int i, j, space, num;

    // (a) Floyd's Triangle (4 rows)
    printf("Pattern (a):\n");
    num = 1;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    // (b) Incremental Number Pyramid
    printf("\nPattern (b):\n");
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // (c) Palindromic Alphabet Pyramid with Center Gap
    printf("\nPattern (c):\n");
    int n = 4;
    for (i = 0; i < n; i++) {
        // Left decreasing letters: A B C D ... down to A + (n - 1 - i)
        for (j = 0; j < n - i; j++) {
            printf("%c ", 'A' + j);
        }
        // Center spaces: 0, 2, 4, 6 spaces
        for (space = 0; space < 2 * i; space++) {
            printf("  ");
        }
        // Right letters: skip center duplicate on first row (i == 0)
        int start = (i == 0) ? (n - 2) : (n - 1 - i);
        for (j = start; j >= 0; j--) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }

    // (d) Pascal's Triangle (6 rows)
    printf("\nPattern (d):\n");
    int rows = 6;
    for (i = 0; i < rows; i++) {
        for (space = 0; space < rows - i - 1; space++) {
            printf(" ");
        }
        int val = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", val);
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}