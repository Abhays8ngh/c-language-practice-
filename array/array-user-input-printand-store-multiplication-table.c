#include <stdio.h>

int main()
{
    int a[10];
    int n;
    printf("Enter the number for which you want to print the multiplication table: ");
    scanf("%d", &n);
    for(int i = 0; i < 10; i++)
    {
        a[i] = n * (i + 1);
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", n, i + 1, a[i]);
    }3
    return 0;
}
