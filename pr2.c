#include<stdio.h>

int main(){
    printf("check leap year or not \n welcome please try it");
    int year;
    printf("enter year\n");
    scanf("%d",&year);
    if (year%4==0 && year%100!=0 || year%400)
    {

        
        /* code */
        printf("%d is  leap year\n",year);
        
    }
    else
    printf("this not a leap year\n");
    
    
    
}