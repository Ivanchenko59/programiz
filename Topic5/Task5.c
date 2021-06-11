#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, large = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int* arr = malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", arr + i);

        if (*(arr + i) > large) {
            large = *(arr + i);
        }
    }

    printf("Largest element of array is %d", large);

    return 0;
}