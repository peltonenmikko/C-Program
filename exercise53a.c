#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>

int count_char(char str[], char c);
int main(void)
{
    int c;
    char str[30];
    printf("Give a string: ");
    fgets(str,30,stdin);

    printf("Give character to be searched: ");
    scanf("%c", &c);

    printf("\nIn string, there is %d of selected characters", count_char(str, c));
}

int count_char(char str[], char c)
{
    int b, amount = 0;
    for(b=0; str[b] != '\0'; b++)
    {
        if(str[b] == c)
        {
            amount++;
        }
        else
        {
            continue;
        }
    }

    return amount;
}