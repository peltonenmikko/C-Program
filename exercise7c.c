#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>

int guess_the_number(int number_to_be_guessed, int *tries_used);
int main(void)
{
    srand(time(NULL));
    int number_to_be_guessed = rand() % 100 + 1;
    int tries_used;
    int result = guess_the_number(number_to_be_guessed, &tries_used);
    if (result == 1)
    {
    printf("You won! It took you %d tries.", tries_used);
    }
    else
    {
    printf("You lost! The number was %d.", number_to_be_guessed);
    }
    return 0;
}

int guess_the_number(int number_to_be_guessed, int *tries_used)
{
    int number_guessed = 0, b = 0;
    printf("Guess the number between 0 and 100: ");
    for(b=0; b<5; b++)
    {
        scanf("%d", &number_guessed);
        if(number_guessed == number_to_be_guessed)
        {
            *tries_used = b+1;
            return 1;
        }
        else
        {
            if(b<4)
            {
                if(number_guessed > number_to_be_guessed)
                {
                    printf("Wrong number. Correct number is smaller: ");
                }
                else
                {
                    printf("Wrong number. Correct number is bigger: ");
                }
            }
        }
    }
}