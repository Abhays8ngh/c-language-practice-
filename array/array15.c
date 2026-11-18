#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char copyStr[100];
    char concatStr[200];

    // 1. Length
    printf("Length of str1 ('%s') = %d\n", str1, strlen(str1));

    // 2. Copy
    strcpy(copyStr, str1);
    printf("Copied string (copyStr) = %s\n", copyStr);

    // 3. Concatenation
    strcpy(concatStr, str1);
    // strcat(concatStr, " ");
    strcat(concatStr, str2);
    printf("Concatenated string = %s\n", concatStr);

    // 4. Comparison
    int cmp = strcmp(str1, str2);
    if (cmp == 0)
        printf("str1 and str2 are equal.\n");
        // else if (cmp < 0)
        //     printf("str1 ('%s') comes before str2 ('%s') lexicographically.\n", str1, str2);
        else
        printf("str1 and str2 are equal.\n");
        

    return 0;
}