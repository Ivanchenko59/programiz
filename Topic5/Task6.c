#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculateSD(int n, float *arr);

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float* arr = malloc(n * sizeof(float));

    printf("Enter 10 elements: ");

    for (int i = 0; i < n; i++)
        scanf("%f", arr + i);

    printf("\nStandard Deviation = %.6f", calculateSD(n, arr));
    
    return 0;
}

float calculateSD(int n, float *arr) {

    float avg = 0, sum = 0;

    for (int i = 0; i < n; i++)
        avg += *(arr + i);
    
    avg /= n;

    for (int i = 0; i < n; i++)
        sum += pow((*(arr + i) - avg), 2);

    return sqrt(sum/n);
}