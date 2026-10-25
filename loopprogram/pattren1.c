#include <stdio.h>

int main()
{
    int pl,i,j;
    printf("enter enter nubr of colum\n");
    scanf("%d",&pl);
    for ( i = 1; i <=pl; i++)
    {
        /* code */
        for ( j = 0; j < i; j++)
        {
            printf("*");
            
        }
        printf("\n");
        
    }
    
    
    return 0;
}