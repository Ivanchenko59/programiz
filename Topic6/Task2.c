#include <stdio.h>

int main (void) {

    char str1[100] = "programming ";
    char str2[] = "is awesome";

    int str_len = 0;

    while (str1[str_len] != '\0') {
        str_len++;
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        str1[str_len + i] = str2[i];
    }

    printf("%s", str1);
    
    return 0;
}