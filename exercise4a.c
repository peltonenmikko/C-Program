#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define RAND_MAX 40
#define RAND_MIN  -40
#define ARRAY_SIZE 15

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

    printf("Array of size 15 filled with random numbers (between -40 ... 40) is:\n");

    for (b=0; b<ARRAY_SIZE ;b++)
    {
        printf("%d", array[b]);
        
        if (b<ARRAY_SIZE-1)
        {
            printf(", ");
        }
    }

}