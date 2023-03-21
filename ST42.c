#include <stdio.h>
int main(void)
{
    int rows;
    int b;
    int num1;
    int num2;
    int space;

    printf("Input rows:");
    scanf(" %d", &rows);
    printf("\n");

    for(num1=1; num1<=rows; num1++){

        for (b=1; b<=num1; b++){
            printf("%d", num1);
        }

        for (space=1; space<=2*(rows-num1); space++){
            printf(" ");
        }

        for (num2=num1; num2>=1; num2--){
            printf("%d", num1);
        }

        printf("\n");

    }
}