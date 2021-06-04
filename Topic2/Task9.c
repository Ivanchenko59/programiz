#include <stdio.h>

int main() {

    int n;
    unsigned long long factorial = 1;

    do {
        printf("Enter the number of factorial: ");
        scanf("%d", &n);   
    } while (n < 0);
    
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    printf("Factorial of %d is %d", n, factorial);

    return 0;
}