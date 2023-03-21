#include <stdio.h>

int main(void)
{
    int a;
    int b;

    printf("Give coordinate point in format (x,y):");
    scanf("(%d,%d)", &a, &b);

    if (a < 0 && b > 0)
        printf("The coordinate point (%d,%d) lies in the first quadrant.", a, b);

    if (a > 0 && b > 0)
        printf("The coordinate point (%d,%d) lies in the second quadrant.", a, b);

    if (a < 0 && b < 0)
        printf("The coordinate point (%d,%d) lies in the third quadrant.", a, b);

    if (a > 0 && b < 0)
        printf("The coordinate point (%d,%d) lies in the fourth quadrant.", a, b);
}