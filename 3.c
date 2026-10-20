#include <stdio.h>
void thrity_times(int* a){
    *a=*a*30;

}
int main()
{
    int i=10;
    // int* a=&i;
    printf("value of i= %d \n",i);
    thrity_times(&i);
    printf("after 30 times=%d \n",i);
    
    return 0;
}