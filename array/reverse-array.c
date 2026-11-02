#include <stdio.h>

void printarray(int arr[],int n){
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        
    }
printf("\n");}
    int reversearray(int arr[],int n){
        int temp;
    for(int i = 0; i < n/2; i++)
    {
       temp=arr[i];
       arr[i]=arr[n-i-1];
       arr[n-i-1]=temp;
        
    }}    
int main()
{
    int a[10]= {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 10;
    printarray(a,n);
    reversearray(a,n);
    printarray(a,n);
    return 0;
}