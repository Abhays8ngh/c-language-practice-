// this is a program to count zero and positive and negative

#include <stdio.h>

int main()
{
    int a[10]={1,0,7,8,5,3,20,-1,-4},z=0,n=0,p=0;
    for (int  i = 0; i <9; i++)
    {
        /* code */
        if(a[i]>0){
            p++;
        }
        else if(a[i]<0){
            n++;
        }
        else if(a[i]==0){
            z++;
        }

    }
    printf("count of 0 %d\n",z);
    printf("count of negetive numbers %d\n",n);
    printf("count of positive numbers %d\n",p);
    
    
    

    return 0;
}