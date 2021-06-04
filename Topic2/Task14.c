#include <stdio.h>

int main() {

    int count = 0;
    long long n;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    while (n != 0) {
        n = n / 10;
        count++;
    }
    
    printf("Number of digits: %d", count);

    return 0;
}