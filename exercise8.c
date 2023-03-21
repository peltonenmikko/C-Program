#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>

void menu(void);
char ask_command(void);
int count_vowels(char str[]);
int to_upper(char str[]);
int to_lower(char str[]);
int read_string(char str[]);
int current(char str[]);
void read_file(char str[]);
void write_file(char str[]);
int main(void)
{
    printf("(~_|_ _. _  _   |\\/| _  _ . _    | _ _|_. _  _ \n_) | | || |(_|  |  |(_|| |||_)|_||(_| | |(_)| |\n            _|             |                   ");

    char str[30] = "new string";
    char cmd;
    menu();

while(cmd!=120 || cmd!=88)
{
    printf("\nGive command:");
    cmd = ask_command();

//Vowels
    if(cmd=='a' || cmd=='A')
    {
        count_vowels(str);
    }
//consonants
    if(cmd=='b' || cmd=='B')
    {
        count_consonants(str);
    }
//Upper case
    if(cmd=='c' || cmd=='C')
    {
        str == to_upper(str);
    }
//Lower case
    if(cmd=='d' || cmd=='D')
    {
        str == to_lower(str);
    }
//Current string
    if(cmd=='e' || cmd=='E')
    {
        current(str);
    }
//Enter another string
    if(cmd=='f' || cmd=='F')
    {
        str == read_string(str);
    }
//Read from file
    if(cmd=='g' || cmd=='G')
    {
        read_file(str);
    }
//Write to file
    if(cmd=='h' || cmd=='H')
    {
        write_file(str);
    }
//Menu
    if(cmd=='m' || cmd=='M')
    {
        menu();
    }

    if(cmd=='x' || cmd=='X')
    {
        return 0;
    }
}
}
//Vowels
int count_vowels(char str[])
{
    int b = 0;
    int c = 0;
    for(b=0; str[b]!='\0'; b++)
    {
        if (str[b] == 'a' || str[b] == 'A' || str[b] == 'e' || str[b] == 'E' || str[b] == 'i' || str[b] == 'I' || str[b] =='o' || str[b]=='O' || str[b] == 'u' || str[b] == 'U')
        {
            c++;
        }
    }
    printf("String has %d vowels", c);
    return 0;
}
//Consonants
int count_consonants(char str[])
{
    int b = 0;
    int c = 0;
    for(b=0; str[b]!='\0'; b++)
    {
        if (str[b] == 'b' || str[b] == 'B' || str[b] == 'c' || str[b] == 'C' || str[b] == 'd' || str[b] == 'D' || str[b] =='f' || str[b]=='F' || str[b] == 'g' || str[b] == 'G' || str[b] =='h' || str[b]=='H' || str[b] == 'j' || str[b] == 'J' || str[b] =='k' || str[b]=='K' || str[b] == 'l' || str[b] == 'L' || str[b] =='m' || str[b]=='M' || str[b] == 'n' || str[b] == 'N' || str[b] =='p' || str[b]=='P' || str[b] == 'r' || str[b] == 'R' || str[b] =='s' || str[b]=='S' || str[b] == 't' || str[b] == 'T' || str[b] =='v' || str[b]=='V' || str[b] == 'w' || str[b] == 'W' || str[b] =='y' || str[b]=='Y' || str[b] == 'z' || str[b] == 'Z')
        {
            c++;
        }
    }
    printf("String has %d consonants", c);
    return 0;
}
//Ask command
char ask_command(void)
{
    char c[6];
    fgets(c,6,stdin);
    return c[0];
}
//Upper case
int to_upper(char str[])
{
    int b;
    for(b=0; str[b]!='\0'; b++)
    {
        if(str[b] >= 'a' && str[b] <= 'z')
        {
            str[b] = str[b] - 32;
        }
    }
    return str;
}
//Lower case
int to_lower(char str[])
{
    int b;
    for(b=0; str[b]!='\0'; b++)
    {
        if(str[b] >= 'A' && str[b] <= 'Z')
        {
            str[b] = str[b] + 32;
        }
    }
    return str;
}
//Current string
int current(char str[])
{
    puts(str);
}
//Enter another string
int read_string(char str[])
{
    printf("Give string:");
    fgets(str,30,stdin);
    return str;
}
//Read from file
void read_file(char str[])
{
    FILE *file_pointer;

    file_pointer = fopen("textfile.txt", "r");
    if(file_pointer==0)
        {
        printf("File does not exist\n");
        }
    else
        {
            fgets(str, 30, file_pointer);
            printf("%s",str);
            fclose(file_pointer);
        }
}
//Write to file
void write_file(char str[])
{
    FILE *file_pointer;

    file_pointer = fopen("textfile.txt", "w");
    fprintf(file_pointer, "%s", str);
    fclose(file_pointer);
}
//Menu
void menu(void)
{
    printf("\nA) Count the number of vowels in the string\nB) Count the number of consonants int the string\nC) Convet the string to uppercase\nD) Convert the string to lowercase\nE) Display the current string\nF) Enter another string\nG) Read string from file\nH) Write string to file\n\nM) Display this menu\nX) Exit the program\n");
}


