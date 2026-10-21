#include <stdio.h>

int main()
{
    int a=10;
    int b=19;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap");
    printf("a=%d b=%d ",a,b);
    return 0;
}
