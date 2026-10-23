#include <stdio.h>

int main()
{
    int i,n,sum=0;
    printf("enter a number this program calculate sum 1 to this number\n");
    scanf("%d",&n);
    for ( i = 0; i <=n; i++)
    {
        /* code */
        sum=sum+i;
    }
    printf("sum of %d numbers=%d\n",n,sum);
    
    
    return 0;
}