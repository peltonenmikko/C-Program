#include <stdio.h>

int main(void)
{
    char fname[30];
    char lname[30];
    char gender;
    int age;
    int shoe;
    float bank;
    char address[30];
    char phone[30];
    
    printf("First and last name: ");
    scanf("%s", fname);
    scanf("%s", lname);
    
    printf("Gender M/F/O: ");
    scanf(" %c", &gender);
    
    printf("Age: ");
    scanf("%d", &age);

    printf("Shoe size: ");
    scanf("%d", &shoe);
    
    printf("Bank account balance: ");
    scanf("%f", &bank);
    
    printf("Address: ");
    scanf("%s", address);
    
    printf("Phone number: ");
    scanf("%s", &phone);
    
    
    
    printf("\nName: %s %s ", fname, lname);
    printf("\nGender:%c ", gender);
    printf("\nAddress: %s ", address);
    printf("\nPhone: %s ", phone);
    printf("\nAge: %d ", age);
    printf("\nBank balance: %.2f ", bank);
    printf("\nShoe size: %d ", shoe);
    

    return 0;
}