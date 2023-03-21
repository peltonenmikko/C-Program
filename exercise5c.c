#include <stdio.h>
#include <math.h>

void print_average(num1, num2)
{
    float sum = num1+num2;
    float avg = sum/2;

    printf("\nUser entered numbers %d and %d\n", num1, num2);
    
    if(num1>num2)
    {
        printf("Bigger number is %d and the average is %.1f", num1, avg);
    }
    else if(num1<num2)
    {
        printf("Bigger number is %d and the average is %.1f", num2, avg);
    }
}

int main(void)
{
    int num1, num2;

    printf("Give number 1:");
    scanf("%d", &num1);
    printf("Give number 2:");
    scanf("%d", &num2);

    print_average(num1, num2);
}