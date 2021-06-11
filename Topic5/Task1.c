#include <stdio.h>

const int SIZE = 6;

int main() {

    int arr[SIZE], sum = 0;

    for (int i = 0; i < SIZE; i++) {

        scanf("%d", arr+i);
        sum += *(arr+i);
    }

    printf("Sum of array values is %d", sum);

    return 0; 
}