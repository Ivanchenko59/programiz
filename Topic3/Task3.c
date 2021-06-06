#include <stdio.h>

int checkPrimeNumber(int n);

int main() {

    int num, flag, i, j;

    printf("Enter number: ");
    scanf("%d", &num);


    for (i = 1, j = num - 1; i <= num / 2; i++, j--) {

        flag = checkPrimeNumber(i) && checkPrimeNumber(j);
        
        if (flag == 1) 
            printf("%d = %d + %d\n", num, i, j);
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
