#include <stdio.h>

int main()
{
    // switch-case se simple calculator banao (+, -, *, /). Division by zero handle karo
    printf("-------welcome to calcuator---------\n");
    int num1,num2;
    char operator;
    printf("enter two numbers ");
    scanf("%d %d",&num1,&num2);
    printf("Enter an operator (+, -, x, /): ");
    scanf(" %c", &operator);
    switch (operator)
    {       
    case '+':
        /* code */
        printf("sum of two number %d\n",num1+num2);
        
        break;
    case '-':
        printf("subtraction of two numbers %d\n",num1-num2);
        break;
    case 'x':
        printf("multiplication of two numbers %d\n",num1*num2);
        break;
    case '/':
        if (num2!=0)
        {
            /* code */
            printf("division of two numbers %d\n",num1/num2);
        }
        else{
            printf("error divided by zero not allow\n");
            
        }
    
        
        
    
    default:
    printf("invalid opreator\n");
    
        break;
    }
    return 0;
}