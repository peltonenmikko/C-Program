#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    int num;
    int array[10];
    int avg = 0;
    float avg1 = 0;
    int avg2 = 0;

    printf("Enter 10 numbers\n");

    for (a=1 ; a<11 ; a++)
    {
        printf("%d. ", a);
        scanf("%d", &num);
        array[a-1]= num;
    }

    for (b=0 ; b<10 ; b++)
    {
        avg = avg + array[b];
    }

    avg1 = (float)avg/10;
    

   printf("The mean value of numbers [ %d,%d,%d,%d,%d,%d,%d,%d,%d,%d ] is %.1f", array[0], array[1], array[2], array[3], array[4], array[5], array[6], array[7], array[8], array[9], avg1);
}