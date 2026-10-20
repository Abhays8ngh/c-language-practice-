#include <stdio.h>

int main()
{
    int temp_celcius;
    printf("hello!! \n welcome to our converter \n enter temp in celcius ");
    scanf("%d",&temp_celcius);
    printf("temp in fahrenheit %f\n",((temp_celcius*9.0)/5)+32);
    
    return 0;
}