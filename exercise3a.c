#include <stdio.h>

int main(void)

{
    int num1;
    int num2;

    printf("Give number 1: ");
    scanf("%d", &num1);

    printf("give number 2: ");
    scanf("%d", &num2);

    if(num1 > num2)
        printf("User did input numbers %d and %d and the bigger one is %d", num1, num2, num1);
    else
        printf("User did input numbers %d and %d and the bigger one is %d", num1, num2, num2);

}