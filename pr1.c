#include<stdio.h>

int main(){
    int marks1,marks2,marks3;
    printf("enter your 1st sub marks\n");
    scanf("%d",&marks1);
    printf("enter your 2st sub marks\n");
    scanf("%d",&marks2);
    printf("enter your 3st sub marks\n");
    scanf("%d",&marks3);
    printf("your marks %d %d and %d \n",marks1,marks2,marks3);
    if(marks1<36 || marks2<36 || marks3<36){
        printf("You are falied due to less indivuble marks\n");
        
    }
    else if ((marks1+marks2+marks3)/3<40){
        printf("your fil due to low percentage\n");

        

    }
    else{
        printf("you are passed\n");
        
    }
    
}