#include <stdio.h>
int fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    printf("enter positive number\n");
    scanf("%d",&n);
    printf("fibbonachi number=%d\n",fib(n));
    
    
    return 0;
}