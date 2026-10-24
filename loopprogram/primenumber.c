#include <stdio.h>

int main()
{
    int i,n,prime=1;
    printf("enter a number \n");
    scanf("%d",&n);
    for (i=2;i<=n/2;i++)
    {
        /* code */
        if(n%i==0){
            prime=0;

        }

    }
    if(prime==1 && n>1){
        printf("prime number\n");
        
    }
    else
        printf("not prime number\n")
    
    
    return 0;
}
