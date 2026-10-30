#include <stdio.h>
// Element search karo
#define size 10
int main()
{
    int a[size]={10,50,33,23,47,22,107};
    int c,b;
    int l;

    printf("enter a value");
    scanf("%d",&c);
    for (int i = 0; i < size; i++)
    {
        if(c==a[i]){
            b=1;
            l=i;
            break;
            
        }
        
    }
    if(b==1){
        printf("found\n at %d",l);
        
    }
    else{
        printf("not found\n");
        
    }
    
    return 0;
}