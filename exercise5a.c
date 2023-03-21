#include <stdio.h>
#include <math.h>

void foo(void)
{
    printf("Hi, I am a function");
}

int main(void)
{
    printf("This text is printed in main\n");
    foo();
    printf("\nAnd back again in main");
}

