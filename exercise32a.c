#include <stdio.h>

int main(void)
{
    int num;
    int num1;
    int num2;

    printf("Give me number: ");
    scanf("%d", &num);

    printf("The multiplication table for %d is:", num);

    for (num1=0 ; num1<11 ; num1++)
    {
        num2 = num1 * num;
        printf("\n%d * %d = %d", num1, num, num2);
    }

}