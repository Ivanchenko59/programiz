#include <stdio.h>

#define VAR 10

int main() {

    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    switch (VAR) {
        case 1: {            
            for (int i = 1; i <= rows; i++) {
                for (int j = 1; j <= i; j++)
                    printf("* ");
                printf("\n");
            }
        }
            break;
        
        case 2: {
            for (int i = 1; i <= rows; i++) {
                for (int j = 1; j <= i; j++)
                    printf("%d ", j);
                printf("\n");
            }
        }    
            break;       

        case 3: {
            int alphabet = 'A';
            for (int i = 1; i <= rows; i++) {
                for (int j = 1; j <= i; j++)
                    printf("%c ", alphabet);
                alphabet++;
                printf("\n");
            }
        }
            break;

        case 4: {
            for (int i = rows; i >= 1; i--) {
                for (int j = 1; j <= i; j++)
                    printf("* ");
                printf("\n");
            }
        }
            break;

        case 5: {
            for (int i = rows; i >= 1; i--) {
                for (int j = 1; j <= i; j++)
                    printf("%d ", j);
                printf("\n");
            }
        }
            break;

        case 6: {
            for (int i = 1; i <= rows; i++) {

                for (int k = rows - i; k >= 1; k--)
                        printf("  ");

                for (int j = 1; j <= i*2-1; j++) {
                    printf("* ");

                }
            printf("\n");
            }
        }
            break;
        
        case 7: {
        int m;
            for (int i = 1; i <= rows; i++) {

                for (int k = rows - i; k >= 1; k--)
                        printf("  ");
                        
                for (int j = 1; j <= i*2-1; j++) {
                    if (j <= i) {
                        printf("%d ", j+i-1);
                        m = j+i-2;
                    }
                    else
                        printf("%d ", m--);
                }
            printf("\n");
            }
        }
            break;

        case 8: {
            for (int i = rows; i >= 1; i--) {

                for (int k = rows - i; k >= 1; k--)
                        printf("  ");

                for (int j = 1; j <= i*2-1; j++) {
                    printf("* ");

                }
            printf("\n");
            }

        }
            break;

        case 9: {
            printf("I don't know :(");

        }
            break;

        case 10: {
            int k = 1;
            for (int i = 1; i <= rows; i++) {
                for (int j = 1; j <= i; j++, k++)
                    printf("%d ", k);
                printf("\n");
            }
        }
            break;
    }

    return 0;
}