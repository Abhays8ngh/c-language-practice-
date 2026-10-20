#include <stdio.h>
void address(int* a){
    // int* ptr=&a;
    printf("addrees by function %u\n",a);
    
}
int main()
{
    int i=10;
    int* ptr=&i;
    printf("address of i %u\n",ptr);
    address(ptr);
    
    return 0;
}