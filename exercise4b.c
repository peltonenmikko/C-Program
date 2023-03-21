#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define RAND_MAX 40
#define RAND_MIN  10
#define ARRAY_SIZE 20

int main(void)
{
    srand(time(NULL));
   
    int b,a;
    int i, array[ARRAY_SIZE];
    for (b=0; b<ARRAY_SIZE ;b++)
    {
        a=(rand()%(RAND_MAX - RAND_MIN) +RAND_MIN);
        array[b]= a;
    }

    printf("Array of random numbers is: ");

    for (b=0; b<ARRAY_SIZE ;b++)
    {
        printf("%d", array[b]);
        
        if (b<ARRAY_SIZE-1)
        {
            printf(", ");
        }
    }

    //reverse

    printf("\nSame array in reverse order is: ");

    for (b=ARRAY_SIZE-1; b>0-1; b--)
    {
        printf("%d", array[b]);

        if (b>0)
        {
            printf(", ");
        }
    }
}