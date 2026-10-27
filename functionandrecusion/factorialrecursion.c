#include <stdio.h>
int fact(int a){
    if(a==0)
    return 1;
    else
    return a*fact(a-1);
}
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    int result=fact(a);
    printf("factorial=%d\n",result);
    
    
    return 0;
}