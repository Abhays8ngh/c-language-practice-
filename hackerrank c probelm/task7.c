#include <stdio.h>

// Recursive function to find the nth term
int find_nth_term(int n, int a, int b, int c) {
    // Base cases
    if (n == 1) {
        return a;
    }
    if (n == 2) {
        return b;
    }
    if (n == 3) {
        return c;
    }
    
    // Recursive step
    return find_nth_term(n - 1, a, b, c) + 
           find_nth_term(n - 2, a, b, c) + 
           find_nth_term(n - 3, a, b, c);
}

int main() {
    int n, a, b, c;
  
    // Reading inputs: n followed by the first three terms a, b, c
    if (scanf("%d %d %d %d", &n, &a, &b, &c) == 4) {
        int ans = find_nth_term(n, a, b, c);
        printf("%d\n", ans);
    }
    
    return 0;
}
