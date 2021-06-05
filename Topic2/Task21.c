#include <stdio.h>

int power(int base, int exp) {
    int power = 1;

    for (int i = 1; i <= exp; i++)
        power *= base;
   
    return power;
}

int main() {

    int low, high, num, n, digit, arm = 0; 

    printf("Enter the intervals: ");
    scanf("%d %d", &low, &high);
    
    printf("Armstrong number on intervals from %d to %d: ", low, high);

    for (num = low; num <= high; num++) {
        
        digit = 0;
        arm = 0;
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
            printf("%d, ", num);

    }
    return 0;
}
