//  Rectangle ka area aur perimeter nikalo (length aur breadth user se lo)
#include <stdio.h>

int main()
{
    int width,length;
    printf("enter wdith and length");
    scanf("%d %d",&width,&length);
    printf("area of rectrangle %d\n",width*length);
    printf("perimeter of rectrangle %d\n",(width+length)*2);
    
    
    return 0;
}
