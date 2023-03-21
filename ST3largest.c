#include <stdio.h>

int main(void)
{
    int num0;
    int num1;
    int num2;

    printf("give number 1 ");
    scanf("%d", &num0);
    
    printf("give number 2 ");
    scanf("%d", &num1);
    
    printf("give number 3 ");
    scanf("%d", &num2);

    if (num0 >= num1 && num0 >= num2)
    {
        printf("Largest number is %d", num0);
    }

    else if (num1 >= num0 && num1 >= num2)
    {
        printf("Largest number is %d", num1);
    }

    else if (num2 >= num1 && num2 >= num0)
    {
        printf("Largest number is %d", num2);
    }
}