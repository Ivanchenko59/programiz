#include <stdio.h>

int main() {

    char ch;

    printf("Enter the alphabet character: ");
    scanf("%ch", &ch);
    printf("%d - in ASCII\n", ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("%c - is alphabet uppercase", ch);

    else if (ch >= 'a' && ch <= 'z')
        printf("%c - is alphabet lowercase", ch);

    else
        printf("%c - is not an alphabet character", ch);

    return 0; 
}