#include <stdio.h>

const int CITY = 2;
const int DAY = 7;

int main() {

    int tmpr[CITY][DAY];

    for (int i = 0; i < CITY; i++) {

        for (int j = 0; j < DAY; j++) {

            printf("Enter the temperature for city %d for day %d: ", i + 1, j + 1);
            scanf("%d", &tmpr[i][j]);
        }
    }

    for (int i = 0; i < CITY; i++) {

        for (int j = 0; j < DAY; j++) {
            
            printf("City %d, Day %d = %d\n", i + 1, j + 1, tmpr[i][j]);
        }
    }

    return 0;
}
