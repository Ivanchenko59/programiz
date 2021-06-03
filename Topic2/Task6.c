#include <stdio.h>

int main() {

    double number;
    
    printf("Enter the number: ");
    scanf("%lf", &number);

    if (number > 0) 
        printf("%.2lf - is positive", number);
    else if (number < 0) 
        printf("%.2lf - is negative", number);

    else
        printf("%.0lf - is zero", number);

    return 0;
}