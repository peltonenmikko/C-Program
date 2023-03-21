#include <stdio.h>
#include <math.h>

float calc_average(num1, num2)
{
    float sum = num1+num2;
    float avg = sum/2;

    return avg;
}

int main(void)
{
    int num1, num2;
    printf("Give two numbers separated by comma: ");
    scanf("%d,%d", &num1, &num2);

    float average = calc_average(num1, num2);

    printf("Average of %d and %d is %.2f", num1, num2, average);
}