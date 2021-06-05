#include <stdio.h>

int abs(int x) {
    (x < 0) ? -x : x;
    return x;
}

int main() {

    int base, exp; 
    double power = 1;

    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);
  
    for (int i = 1; i <= abs(exp); i++)
        power *= base;

    if ( exp < 0)
        power = 1 / power;

    printf("Power of a Number %d ^%d is %.4lf", base, exp, power);

    return 0;
}