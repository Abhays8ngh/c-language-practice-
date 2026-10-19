#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main()
{
    printf("guess number game");
    int guessnumber,guesses=0;
    srand(time(0));
    int n=(rand()%100)+1;
    
    do
    {
        printf("guess a number \n");
        scanf("%d",&guessnumber);
        if(guessnumber<n){
        printf("too low please enter higher number\n");
        
    }
        if(guessnumber>n){
        printf("too high please enter lower number\n");
        
    }
        
        guesses++;
        /* code */
    } while (guessnumber!=n);
    printf("congrats! you guessed number in %d guesses\n",guesses);
    
    
    
    
    
    
    return 0;
}