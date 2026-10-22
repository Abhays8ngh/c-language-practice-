#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Teen numbers enter karein: ");
    scanf("%d %d %d", &a, &b, &c);

    // Ternary operator ka use karke sabse bada number nikalna
   
 int max =(a>b)?(a>c ? a:c):(b>c?b:c);
    printf("Sabse bada number hai: %d\n", max);

    return 0;
}