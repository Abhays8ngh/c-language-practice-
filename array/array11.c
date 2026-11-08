#include <stdio.h>

int main()
{
    int a[2][3][4];
    for (int  i = 0; i < 2; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            for (int  k = 0; k < 4; k++)
            {
                /* code */
                printf("%u \n",&a[i][j][k]);
            }
            
        }
        
    }
    
    return 0;
}