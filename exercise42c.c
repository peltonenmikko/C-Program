#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    char string[30];

    printf("Give String: "); //give string
    fgets(string,30,stdin);

    printf("The length of the string is: "); //string length
    int length = strlen(string);
    printf("%d", length);

    printf("\nThe copied string is: "); //copied string
    char destination[30];
    strcpy(destination,string);
    int b;
    for(b=0; b<length; b++)
    {
        printf("%c", destination[b]);
    }

}