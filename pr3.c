#include<stdio.h>

int main(){
    int num1,num2, num3,num4;
    printf("Enter your num1\n");
    scanf("%d",&num1);
    printf("Enter your num2\n");
    scanf("%d",&num2);
    printf("Enter your num3\n");
    scanf("%d",&num3);
    printf("Enter your num4\n");
    scanf("%d",&num4);
    if (num1>num2 && num1>num3 && num1>num4)
    {
        /* code */
        printf("num1 %d greater\n",num1);
        
    }
    else if (num2>num1 && num2>num3 && num2>num4)
    {
        /* code */
        printf("num2 %d greater\n",num2);
        
    }
    else if (num3>num2 && num3>num1 && num3>num4)
    {
        /* code */
        printf("num3 %d greater\n",num3);
        
    }
    else if (num4>num2 && num4>num3 && num4>num2)
    {
        /* code */
        printf("num4 %d greater\n",num4);
        
    }
    
    
}