#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int guessed_num = rand() % 100 + 1;
    int tries_used;
    int result = guess_the_number(guessed_num, &tries_used);
    
    if (result == 1)
    {
    printf("You won! It took you %d tries.", tries_used);
    }

    else
    {
    printf("You lost! The number was %d.", guessed_num);
    }

    return 0;
}