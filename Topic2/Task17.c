#include <stdio.h>

int main() {

    int n, m, rev = 0;

    printf("Enter the number: ");
    scanf("%d", &n); 
    m = n;
    
    while (m != 0) {
        rev = rev * 10 + m % 10;
        m /= 10;
    }
    
    if (n == rev)
        printf("%d is palindrome.", n);

    else 
        printf("%d is not a palindrome", n);

    return 0; 
}