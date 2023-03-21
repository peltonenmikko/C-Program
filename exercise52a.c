#include <stdio.h>
#include <math.h>

int main(void)
{
    int
    min = 20,
    max = 70,
    num = 0;

    printf("Give number between %d and %d: ", min, max);
    scanf("%d", &num);

    int result = ask_integer_number(min, max, num);

    printf("\nUser given number was %d", result);
}

int ask_integer_number(int min, int max, int num)
{


    if(num<min || num>max)
    {
        while(num<min || num>max)
        {
        printf("Number was not in range (%d-%d): ", min, max);
        scanf("%d",&num);
        }
    }

    return num;
}
