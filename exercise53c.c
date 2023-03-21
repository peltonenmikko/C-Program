#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define MAX_ARRAY 30

void sort_array(int array[], int size);
int main(void)
{
    int array[MAX_ARRAY];
    int b;
    srand(time(NULL));
    for(b=0; b<=MAX_ARRAY; b++)
    {
        array[b]=(rand()%30+1);
    }

//Original array
    printf("Original array is: ");
    for(b=0;b<=MAX_ARRAY;b++)
    {
        printf("%d", array[b]);
        if(b != MAX_ARRAY)
        {
            printf(",");
        }
    }
    int size;
    array[MAX_ARRAY] == sort_array(array, size);

//Sorted array
    printf("Sorted array is: ");
    for(b=0;b<=MAX_ARRAY;b++)
    {
        printf("%d", array[b]);
        if(b != MAX_ARRAY)
        {
            printf(",");
        }
    }
}

void sort_array(int array[], int size)
{
    int b,c,d;

    for(b=1; b<=MAX_ARRAY; b++)
    {
        for(c=1; c<=MAX_ARRAY-b; c++)
        {
            if(array[c]<=array[c+1])
            {
                d=array[c];
                array[c]=array[c+1];
                array[c+1]=d;
            }
            else
            {
                continue;
            }
        }
    } 

    return array[];   
}