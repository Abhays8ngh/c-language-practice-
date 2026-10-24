#include <stdio.h>

int main()
{
    int n,i,digit,check=0;
    printf("enter a number\n");
    scanf("%d",&n);
    
    int num=n;
    while (n!=0)
    {
        /* code */
        digit=n%10;

        check=check*10+digit;
        
        n=n/10;
        i++;
         
        
    }
    if(check==num){
        printf("plindrome number\n");
        
    }
    else
    printf("not a prlindrome number\n");
    
    
    
   

    return 0;
}