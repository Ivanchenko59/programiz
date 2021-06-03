#include <stdio.h>

int main() {

    int year; 

    printf("Enter year: "); 
    scanf("%d", &year);

    if (year % 100 == 0)
        printf("%d - is not leap ", year);

    else if (year % 400 == 0)
        printf("%d - is leap ", year);

    else if (year % 4 == 0)
        printf("%d - is leap ", year);

    else 
        printf("%d - is not leap ", year);
    
    return 0;
}