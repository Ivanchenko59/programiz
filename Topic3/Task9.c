#include <math.h>
#include <stdio.h>

int binToDec(long long n);
long long decToBin(int n);

int main() {
    long long n;
    
    printf("Enter 1 for bin to dec or 2 for dec to bin: ");

    switch (getchar()) {
        case '1': 
        {
            printf("\nEnter a binary number: ");
            scanf("%lld", &n);
            printf("%lld in binary = %d in decimal", n, binToDec(n));
        }
            break;
        
        case '2' :
        {
            printf("\nEnter a decimal number: ");
            scanf("%lld", &n);
            printf("%lld in decimal = %lld in binary", n, decToBin(n));
        }
            break;

        default:
            break;
    }
    return 0;
}

int binToDec(long long n) {
    
    int rem, dec = 0, i = 0;

    while(n != 0) {
        rem = n % 10;
        n = n / 10;
        if (rem == 1)
            dec += pow(2, i);
        i++;
    }
    return dec;
}

long long decToBin(int n) {

    int i = 1, bin = 0, rem = 0;

    while (n != 0) {
        rem = n % 2;
        n /= 2;

        //bin = bin * 10 + rem;
        
        bin = bin + rem * i;
        i *= 10;
    }

    return bin;
}