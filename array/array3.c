#include <stdio.h>

int main()
{
    int arr[]={20,40,5,34,23};
    int largest=arr[0];
    int smallest=arr[1];
    for(int i=0;i<5;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    printf("largest number in array %d\n",largest);
    printf("smallest number in array %d\n",smallest);
    
    

}