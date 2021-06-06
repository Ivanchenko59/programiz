#include <stdio.h>

int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);
int power(int base, int exp);

int main() {

    int num, flag;

    printf("Enter number: ");
    scanf("%d", &num);

        flag = checkPrimeNumber(num);
        if (flag == 1) 
            printf("%d is a prime number.\n", num);
        else
            printf("%d is not a prime number.\n", num);

        flag = checkArmstrongNumber(num);
        if (flag == 1) 
            printf("%d is an Armstrong number.", num);
        else 
        printf("%d is not an Armstrong number.", num);
    
    return 0;
}


int checkPrimeNumber(int n) {

    int flag = 1;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) 
            flag = 0;
    }

    return flag; 
}

int checkArmstrongNumber(int n) {

    int flag, num, digit = 0, arm = 0; 

    num = n;

    while (num != 0) {
        num /= 10;
        digit++;
    }
    
    num = n;
    
    for (int i = 0; i < digit; i++) {
        arm = arm + power(num % 10, digit);
        num /= 10;
    }

    if (arm == n)
      flag = 1;
   else
      flag = 0;

    return flag; 
}


int power(int base, int exp) {
    int power = 1;

    for (int i = 1; i <= exp; i++)
        power *= base;
   
    return power;
}
