#include <stdio.h>

int main(void)
{
    int array[10]={15, 73, 43, -28, 65, 186, -37, 28, 13, 88};
    int num;

    printf("Content of array is");

    for (num=0 ; num<10 ; num++)
    {
        printf("\n%d %d", num, array[num]);
    }
}