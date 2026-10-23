//   Marks input lo aur grade print karo (90+ = A, 80+ = B, 70+ = C, 60+ = D, baaki F) if-else if
// ladder se


#include <stdio.h>

int main()
{
    int num;
    printf("enter number \n");
    scanf("%d",&num);
    if(num>=90){
        printf("grade=A\n");
        
    }
    else if(num<90 || num>80)
    printf("grade=B\n");
    else if(num<80 || num>70)
    printf("grade=C\n");
    else if(num<70 || num>60)
    printf("grade=D\n");
    else{
        printf("grade=F\n");
        
    }
    
    return 0;
}