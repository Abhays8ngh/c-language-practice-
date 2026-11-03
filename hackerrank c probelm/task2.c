#include<stdio.h>

int main(){
    int a,b;
    char num[10][10]={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d %d",&a,&b);
    for (int i = a; i <= b; i++)
    {
        /* code */
        if (i<=9)
        {
            /* code */
            printf("%s\n",num[i-1]);
        }
        else if (i>9)
        {
            /* code */
            if (i%2==0)
            {
                /* code */
                printf("even\n");
            }
            else
            {
                /* code */
                printf("odd\n");
            }
            
        }
    }
    
    
}