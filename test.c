#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d\n", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        for (int k = 1; k <= 2 * (rows - i); k++) {
            printf(" ");
        }
        for (int l = i; l >= 1; l--) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
