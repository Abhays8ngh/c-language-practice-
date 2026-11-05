#include <stdio.h>

int main()
{
    int a;
    printf("enter the size of array: ");
    scanf("%d", &a);
    int arr[a],temp;
    for (int i = 0; i < a; i++)
    {
        printf("enter the value of arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a/2; i++)
    {
        temp=arr[i];
        arr[i] = arr[a-1-i] ;
        arr[a-1-i] = temp;
        
    }   printf("the new array is: ");
    for (int i = 0; i <a; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}