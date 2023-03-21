#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define RAND_MAX 10
#define RAND_MIN  0
#define ARRAY_SIZE 1000

int main(void)
{
    srand(time(NULL));
   
    int b,a, arr[RAND_MAX+1]={0};
    

    int i, array[ARRAY_SIZE];

    for (b=0; b<ARRAY_SIZE ;b++)
    {
        a=(rand()%(RAND_MAX+1 - RAND_MIN) +RAND_MIN);
        arr[a]= arr[a]+1;
    }


    //output

    printf("Number occurrence:\n");

        for (b=0; b<RAND_MAX+1; b++)
    {
        printf(" number %d occurred %d times\n", b, arr[b]);
    }

}