#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    float avg, *arr, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (float*)malloc(n * sizeof(float));

    for (int i = 0; i < n; i++) {

        printf("%d. Enter number: ", i + 1);
        scanf("%f", arr + i);
        sum += *(arr + i);
    }
    
    avg = sum / n;
    printf("Average = %.2f", avg);

    return 0;
}