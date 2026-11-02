#include <stdio.h>

int main()
{
    int a[10];
    for(int i = 0; i < 10; i++)
    {
        a[i] = 5 * (i + 1);
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", 5, i + 1, a[i]);
    }
    return 0;
}