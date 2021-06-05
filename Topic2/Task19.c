#include <stdio.h>

int main() {

    int low, high, j;

    printf("Enter the intervals: ");
    scanf("%d %d", &low, &high);

    printf("Prime number on intervals from %d to %d: ", low, high);

    for (int n = low; n <= high; n++) {
        j = 0;

        for (int i = 2; i <= n; i++) {
            if (n % i == 0) 
            j++;
        }
        if (j == 1)
            printf("%d, ", n);
    }   

    return 0;
}