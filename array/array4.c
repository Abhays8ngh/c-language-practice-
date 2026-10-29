#include <stdio.h>

int main()
{
    int a[5]={10,20,30,40,3};
    int i, j, temp;
    for (int i = 0,j=4; i < j; i++,j--)
    {
        /* code */
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;


    }
    printf("reverse array\n");
    
      for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}