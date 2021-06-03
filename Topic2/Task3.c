#include <stdio.h>
#include <ctype.h> 

int main() {
    
    int a, b, c;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) printf("the largest is %d", a);
    if (b > a && b > c) printf("the largest is %d", b);
    if (c > a && c > b) printf("the largest is %d", c);


    return 0;
}


