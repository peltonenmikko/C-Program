#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void)
{
    char string[30];
    int b=0;

    printf("Give String: "); //give string
    fgets(string,30,stdin);

    printf("The length of the string is: "); //string length
    int length = 0;
    while(string[b] != '\0')
    {
        length++;
        b++;
    }
    printf("%d", length);

    printf("\nThe copied string is: "); //copy string to destination
    char destination[length];
    b=0;
    while(string[b] != '\0')
    {
        destination[b] = string[b];
        b++;
    }

    b=0;
    while(b<length) //print destination
    {
        printf("%c", destination[b]);
        b++;
    }

}