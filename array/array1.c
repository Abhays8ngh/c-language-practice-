#include<stdio.h>

int main()
{
    int studentNumber;
    printf("enter number of student");
    scanf("%d",&studentNumber);
    int marks[studentNumber];
    printf("enter marks of %d student",studentNumber);
    for (int i = 0; i < studentNumber; i++)
    {
        /* code */
        scanf("%d",&marks[i]);

    }
    for (int i = 0; i < studentNumber; i++)
    {
        /* code */
        printf("student  number-%d marks=%d\n",i+1,marks[i]);
    }
    

    return 0;
}