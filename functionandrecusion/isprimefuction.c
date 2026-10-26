#include <stdio.h>
// Function likho jo number prime hai ya nahi (1 ya 0) return kare. Uske use se 1 se 100 ke saare
// primes print karo.
int isprime(int n){
    if(n<=1)
    return 0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
        return 0;

    }
    return 1;
}

int main()
{
    int n,i;
    printf("1 To 100 all prime number");
    for(i=1;i<=100;i++){
        if(isprime(i)==1)
        printf("%d\n",i);
        
    }
    printf("\n");
    
    return 0;
}