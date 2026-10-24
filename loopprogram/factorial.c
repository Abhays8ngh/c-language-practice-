#include <stdio.h>

int main()
{
    int i,n,fact =1;
    printf("enter a number for factorial\n");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        /* code */
        fact=fact*i;

    }
    printf("factorial of number %d\n",fact);
    
    

    return 0;
}