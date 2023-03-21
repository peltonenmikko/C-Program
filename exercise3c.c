#include <stdio.h>

int main(void)

{
    char letter;

    printf("Give me a letter:");
    scanf(" %c", &letter);

    if (letter < 91 && letter > 64 || letter == -114 || letter == -113 || letter == -103)
        printf("Letter %c is a Capital letter", letter);

    if (letter < 123 && letter > 96 || letter == -108 || letter == -124 || letter == -122)
        printf("Letter %c isn't a Capital letter", letter);

    if (letter < 58 && letter > 47)
        printf("Letter %c is a number", letter);

    if (letter < 127 && letter > 122 || letter < 97 && letter > 90 || letter < 65 && letter > 57 || letter < 48 && letter > 32)
        printf("Letter %c is a special character", letter);
}
