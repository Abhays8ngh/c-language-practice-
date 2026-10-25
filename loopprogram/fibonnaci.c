#include <stdio.h>

int main()
{
    int n,t1=0,t2=1,next;
    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n<= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1; 
    }
    for (int i = 1; i <=n; i++)
    {
        /* code */
        if(i==1){
            printf("%d\n",t1);
            continue;
        }
        if(i==2){
            printf("%d\n",t2);
            continue;
        }
        next=t1+t2;
        t1=t2;
        t2=next;
        printf("%d\n",next);
        
    }
    
    return 0;
}