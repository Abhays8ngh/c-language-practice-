#include <stdio.h>


struct employee
{
    /* data */
    int code;
    float salary;
    char name[20];

}e1,e2;

int main()
{
    printf("enter employee code");
    scanf("%d",&e1.code);
    printf("enter employee salary");
    scanf("%f",&e1.salary);
    printf("enter employee name");
    scanf("%s",&e1.name);

    
    

    printf("%d %f %s\n",e1.code,e1.salary,e1.name);
    
    
    
    return 0;
}