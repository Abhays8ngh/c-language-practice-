//  Rectangle ka area aur perimeter nikalo (length aur breadth user se lo)
#include <stdio.h>

int main()
{
    int width,lenth;
    printf("enter wdith and lenth");
    scanf("%d %d",&width,&lenth);
    printf("area of rectrangle %d\n",width*lenth);
    printf("perimeter of rectrangle %d\n",(width+lenth)*2);
    
    
    return 0;
}