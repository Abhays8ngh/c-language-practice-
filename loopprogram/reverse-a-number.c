#include <stdio.h>

int main()
{
    int n,i,digit;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("reverse of number\n");
    
    while (n!=0)
    {
        /* code */
        digit=n%10;
        
        n=n/10;
        i++;
        printf("%d",digit);
         
        
    }
    
   

    return 0;
}