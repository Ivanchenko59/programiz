#include <stdio.h>

int main(int argc, char* argv[]) 
{

    int str_len = 0;

    if (argc != 2) {
        return 1;
    }

    while (argv[1][str_len] != '\0') {
        str_len++;
    } 

    printf("String lenght: %d", str_len);

    return 0;
}
