#include <stdio.h>

int main() {

    char operator;
    double x, y;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &x, &y);

    switch (operator)
    {
    case '+':
        printf("%.2lf + %.2lf = %.2lf", x, y, x+y);
        break;
    
    case '-':
        printf("%.2lf - %.2lf = %.2lf", x, y, x-y);
        break;

    case '*':
        printf("%.2lf * %.2lf = %.2lf", x, y, x*y);
        break;

    case '/':
        printf("%.2lf / %.2lf = %.2lf", x, y, x/y);
        break;

    default:
    printf("Error! operator is not correct");
        break;
    }   


    return 0;
}