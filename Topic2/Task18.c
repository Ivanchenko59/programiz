#include <stdio.h>

int main() {

    int n, j = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        if (n % i == 0) 
            j++;
    }

    if (j == 1) 
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);

    return 0;
}