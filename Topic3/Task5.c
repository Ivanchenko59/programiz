#include <stdio.h>

int factorial(int n);

int main() {

    int num; 

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Factorial of %d is %d", num, factorial(num));


    return 0; 
}

int factorial(int n) {

    if (n>=1)
        return n * factorial(n - 1);
    else
        return 1;
}