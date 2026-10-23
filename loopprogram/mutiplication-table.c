#include <stdio.h>

int main()
{
    int n,i;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("multiplication table\n");
    
    for ( i=1;i<=10;i++)
    {
        /* code */
        printf("%d x %d = %d\n",n,i,n*i);
        
    }
    
    return 0;
}