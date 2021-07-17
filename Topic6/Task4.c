#include <stdio.h>
#include <string.h>
int main(int argc, const char *argv[]) {

    if (argc != 2) {
        return 1;
    }

    char line[250];

    strcpy(line, argv[1]);

    for (int i = 0, j; argv[1][i]; i++) {
        while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0')) {  //can't use if, think about it
            for (j = i; line[j] != '\0'; ++j) {
                line[j] = line[j + 1];
            }
         line[j] = '\0';
        }
    }

    printf("Output String: %s", line);
    return 0;   
}