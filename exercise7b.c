#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void)
{
    int i1, i2;
    int sum, diff, prod, div;
    int *ptr1, *ptr2, *sumptr, *diffptr, *prodptr, *divptr;

    printf("Give first integer: ");
    scanf("%d", &i1);

    printf("Give second integer: ");
    scanf("%d", &i2);

    ptr1 =& i1;
    ptr2 =& i2;

//Sum
    sumptr = *ptr1 + *ptr2;
    sum = sumptr;
    printf("\nSum of the integers is: %d", sum);

//Difference
    if(*ptr1 > *ptr2)
    {
        diffptr = *ptr1 - *ptr2;
        diff = diffptr;
        printf("\nDifference of the integers is: %d", diff);
    }
    else
    {
        diffptr = *ptr2 - *ptr1;
        diff = diffptr;
        printf("\nDifference of the integers is: %d", diff);
    }

//Product
    prodptr = *ptr1 * *ptr2;
    prod = prodptr;
    printf("\nProduct of the integers is: %d", prod);

//Division
    if(*ptr1 > *ptr2)
    {
    divptr = *ptr1 / *ptr2;
    div = divptr;
    printf("\nDivision of the integers is: %d", div);
    }
    else
    {
    divptr = *ptr2 / *ptr1;
    div = divptr;
    printf("\nDivision of the integers is: %d", div);    
    }
}