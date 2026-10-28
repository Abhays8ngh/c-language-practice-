#include <stdio.h>

int main()
{
    int arr[10]={10,20,30,40,50,60,70,80,90},sum=0;
    for (int i = 0; i < 10; i++)
    {
        /* code */
        sum=sum+arr[i];

    }
    printf("sum of array=%d\n",sum);
    printf("average of array =%d\n",sum/9);
    
    

    return 0;
}