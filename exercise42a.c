#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define RAND_MAX 100
#define RAND_MIN  1
#define ARRAY_SIZE 20

int main(void)
{
    srand(time(NULL));
   
    int b;
    int a;
    int c = 1;
    

    int a1[ARRAY_SIZE]; //array 1
    int ama[1]; //max array
    int ami[1]; //min array

    for (b=0; b<ARRAY_SIZE ;b++) //array 1 random number
    {
        a=(rand()%(RAND_MAX - RAND_MIN) +RAND_MIN);
        a1[b]= a;

        if (a > ama[1]) //biggest number
        ama[1] = a;

        if (a < ami[1]) //smallest number
        ami[1] = a;
    }

    printf("Content of array is [ ");

    for (b=0; b<ARRAY_SIZE ;b++)
    {
        printf("%d", a1[b]);
        
        if (b<ARRAY_SIZE-1)
        {
            printf(", ");
        }
    }

    printf(" ]");
    printf("\n and the biggest number was %d and smallest was %d\n\n   ", ama[1], ami[1]);

    for(b=0, a=0 ; b<ama[1]+1; b++, a++) //first line
    {
        if(a == 10)
    {a=0;
        printf("%d",c);
    c++;
    }
    else
    (printf(" "));
    }

    printf("\n   ");

    for(b=0, a=0 ; b<ama[1]+1; b++, a++) //second
        {
    
    if(a == 10)
    {a=0;
    }
    printf("%d",a);
        }

    printf("\n   ");

    for(b=0, a=0 ; b<ama[1]+1; b++, a++) //third
        {
    printf("-");
        }
    
    printf(">\n");




    for(b=0; b<ARRAY_SIZE; b++) //chart
    {
        a=0;

        if(b<10)
        (printf(" %d: ", b));
        else(printf("%d: ", b));

        for(a=0; a<ama[1]; a++)
        {
            if(a < a1[b])
            {
                printf("*");
            }
            else
            (printf(" "));
        }

        printf(" ( %d)\n", a1[b]);

    }

}