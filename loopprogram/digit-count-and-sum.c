#include <stdio.h>

int main()
{
    int n,i,digit,count=0,sum=0;
    printf("enter a number\n");
    scanf("%d",&n);
    while (n!=0)
    {
        /* code */
        digit=n%10;
        sum=sum+digit;
        n=n/10;
        i++;
        count++;
         
        
    }
    
    printf("sum of digit of this number%d\n",sum);
    printf("count of digit of this number%d",count);

    return 0;
}