#include <stdio.h>
#include <math.h>


void foo(int x);

int main(void)
{
    int amount;
    printf("Give a number: ");
    scanf("%d", &amount);
    printf("\n");

    foo(amount);
}

void foo(int a)
{
    int b;

    for(b=0; b<a; b++)
    {
        printf("cock-a-doodle-doo\n");
    }
}