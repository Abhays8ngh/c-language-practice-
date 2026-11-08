#include <stdio.h>

int main()
{
    int a[3][10];
    int mul[]={2,5,7};
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int  j = 0; j < 10; j++)
        {
            /* code */
            a[i][j]=mul[i]*(j+1);
        }
    }
        for ( int i = 0; i < 3; i++)
        {
            /* code */
            for (int  j = 0; j <10 ; j++)
            {
                /* code */
                printf("a[i][j] %d\n",a[i][j]);
            }
            
            
            printf("\n");
        }
    
    return 0;
}