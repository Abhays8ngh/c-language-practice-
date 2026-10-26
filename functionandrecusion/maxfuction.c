#include <stdio.h>
int max(int a,int b){
    return (a>b)? a : b;
}
int main()
{
    int a=10,b=20;
    int result=max(a,b);
    printf("max number=%d ",result);
    
    return 0;
}