#include <stdio.h>
#include <math.h>
#define RAND_MAX 20
#define RAND_MIN -20

int suffle_number(void)
{
    srand(time(NULL));

    int rnum = (rand()%(RAND_MAX - RAND_MIN) +RAND_MIN);
    return rnum;
}

int main(void)
{
    int num;
    num = suffle_number();

    printf("The returned random value is %d", num);
}