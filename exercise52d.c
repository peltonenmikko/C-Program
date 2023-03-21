#include <stdio.h>
#include <math.h>


int days_in_month(int month);
int main(void)
{
    int month;
    printf("Give month: ");
    scanf("%d", &month);
    printf("There are %d days in ", days_in_month(month));

    switch(month)
    {
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
    }
}

int days_in_month(int month)
{
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    return days[month-1];
}