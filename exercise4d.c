#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define RAND_MAX 120
#define RAND_MIN  -50
#define ARRAY_SIZE 15

int main(void)
{
    srand(time(NULL));
   
    int num;
    int b;
    int all[ARRAY_SIZE]={0};
    int odd[ARRAY_SIZE]={0};
    int even[ARRAY_SIZE]={0};
    

    int i, array[ARRAY_SIZE];

    for (b=0; b<ARRAY_SIZE ;b++)
    {
//r number
        num=(rand()%(RAND_MAX - RAND_MIN) +RAND_MIN);
//all
        all[b] = num;
//even
        if (num & 1 == 1)
        {
            odd[b] = num;
        }
//odd
        else
        {
            even[b] = num;
        }

    }

//output


    //all
    printf("All numbers are: \n");

    for (b=0; b<ARRAY_SIZE; b++)
    {
        printf("%d ", all[b]);
    }

    //odd
    printf("\nOdd numbers are: \n");

    for (b=0; b<ARRAY_SIZE; b++)
    {
        if (odd[b] != 0)
        {printf("%d ", odd[b]);}
    }

    //even
    printf("\nEven numbers are: \n");

    for (b=0; b<ARRAY_SIZE; b++)
    {
        if (even[b] != 0)
        {printf("%d ", even[b]);}
    }

}