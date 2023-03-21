#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(void)
{
    int val1, val2;

//First value
    printf("Give first value: ");
    scanf("%d", &val1);

//Second value
    printf("Give second value: ");
    scanf("%d", &val2);
    
    int *p1 =& val1;
    int *p2 =& val2;

    int sum = *p1 + *p2;
    
    printf("Sum of values: %d", sum);
}