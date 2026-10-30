#include <stdio.h>

int main()
{
    int a[10]={};
    static int even,odd;
    printf("enter 10rando number to check even or odd\n");
    for (int i = 0; i <3; i++)
    {
        /* code */

        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        if((a[i])%2==0){
           even++;
        }
        else{
           odd++;
        }
    }
    printf("odd number count %d\n",odd);
    printf("even number count %d\n",even);
    
    

    
    return 0;
}