#include <stdio.h>

int main() {

    int n, F1 = 0, F2 = 1, nextTerm;
    nextTerm = F1 + F2;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: %d, %d", F1, F2);

    for (int i = 0; i < n - 2; i++) {
       printf(", %d", nextTerm);
       F1 = F2;
       F2 = nextTerm;
       nextTerm = F1 + F2;
    }

    return 0;
}