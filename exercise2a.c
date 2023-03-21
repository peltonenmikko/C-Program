#include <stdio.h>

int main(void)
{
    char fname[30] = "Charley";
    char lname[30] = "Brown";
    char gender = 'M';
    int age = 21;
    int shoe = 44;
    float bank = 34.43;
    char address[30] = "Willowstreet";
    char phone[30] = "050-234243242";

     
    printf("\nName: %s %s ", fname, lname);
    printf("\nGender: %c ", gender);
    printf("\nAddress: %s ", address);
    printf("\nPhone: %s ", phone);
    printf("\nAge: %d ", age);
    printf("\nBank balance: %.2f ", bank);
    printf("\nShoe size: %d ", shoe);
    

    return 0;
}