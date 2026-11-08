// You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
#include <stdio.h>

int main()
{
    int s;
    printf("enter how much number you want to input \n");
    scanf("%d",&s);
    int a[s];
    for (int i = 0; i < s; i++)
        scanf("%d",&a[i]);
    {
        
    }
    int traget;
    printf("which number is your target \n");
    scanf("%d",&traget);
    for (int i = 0; i < s; i++)
    {
        for (int j = i+1; j < s; j++)
        {
            if(a[i]+a[j]==traget){
                printf("%d %d\n",i,j);
                break;
                
            }
            
        }
        
        
        
    }
    
    
    

    
    return 0;
}