#include <stdio.h>

int main()
{
    
    int a,n;
    printf("hello welcome to table writer \n");
    printf("enter a number for table\n");
    scanf("%d",&n);
    
    for ( a = 1; a <=10; a++)
    {
        printf("%d X %d = %d \n" ,a ,n,a*n);
    }
    
    return 0;
}