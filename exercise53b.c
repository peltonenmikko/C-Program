#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#define MAX_ARRAY 30

int difference(int array[]);
int main(void)
{
    int array[MAX_ARRAY];
    int b;

    printf("Give an array:\n");

    for(b=0; b<=MAX_ARRAY; b++)
    {
        scanf("%d", &array[b]);
        if(array[b] == 0)
        {
            b=MAX_ARRAY;
        }
    }

    printf("The difference of elements in array is: %d", difference(array));
}

int difference(int array[])
{
    int max = 0, min = 0, b, diff;

    for(b=0; b<MAX_ARRAY; b++)
    {
        if(array[b] > max)
        {
            max = array[b];
        }
        if(array[b] < min)
        {
            min = array[b];
        }

        if(array[b] == 0)
        {
            b=MAX_ARRAY;
        }
    }

    diff = max-min;
    return diff;
}