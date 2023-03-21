#include <stdio.h>

int main(void)

{
    char letter;

    printf("Give me a letter:");
    scanf(" %c", &letter);

    if (letter < 91 && letter > 64 || letter == -114 || letter == -113 || letter == -103)
    printf("Letter %c is a Capital letter", letter);
    else
    printf("Letter %c isn't a Capital letter", letter);

}
