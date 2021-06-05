#include <stdio.h>

int power(int base, int exp) {
    int power = 1;

    for (int i = 1; i <= exp; i++)
        power *= base;
   
    return power;
}

int main() {

    int num, n, digit = 0, arm = 0; 

    printf("Enter the number: ");
    scanf("%d", &num);
    n = num;

    while (n != 0) {
        n /= 10;
        digit++;
    }
    
    n = num;
    
    for (int i = 0; i < digit; i++) {
        arm = arm + power(n % 10, digit);
        n /= 10;
    }
    
    if (arm == num) 
        printf("%d is an Armstrong number", num);

    else 
        printf("%d is not an Armstrong number", num);
    
    return 0;
}
