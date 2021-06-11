#include <stdio.h>

void swap(int* n1, int* n2);


int main() {

    int num1, num2;

    printf("Enter the value n1 and n2: ");
    scanf("%d %d", &num1, &num2);
    swap(&num1, &num2);
    printf("num1 = %d\nnum2 = %d", num1, num2);

    return 0;
}

void swap(int* n1, int* n2) {

    int temp; 

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}


