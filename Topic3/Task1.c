#include <stdio.h>

int checkPrimeNumber(int n);

int main() {

    int low, high, flag;

    printf("Enter the intervals: ");
    scanf("%d %d", &low, &high);

    printf("Prime number on intervals from %d to %d: ", low, high);

    for (int i = low; i <= high; i++) {
        flag = checkPrimeNumber(i);
        if (flag == 1) 
            printf("%d, ", i);
    }   

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