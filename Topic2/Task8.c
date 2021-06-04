#include <stdio.h>

int main() {

    int n, i, sum = 0;
    
    do {
        printf("Enter the positive quantity of sum: "); 
        scanf("%d", &n);
    } while (n <= 0);
    
    for (i = 1; i <= n; i++)
        sum += i; 

     printf("Sum of %d elements is - %d", n, sum);
    return 0;
}