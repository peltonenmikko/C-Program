#include <stdio.h>
#include <math.h>

void leap_year(int year);
int main(void)
{
    int year;
    printf("Give year: ");
    scanf("%d", &year);
    leap_year(year);
}

void leap_year(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 100 == 0 && year % 400 == 0))
    {
      printf("The year %d is a leap year", year);
    }
    else
    {
        printf("The year %d is not a leap year", year);
    }

}