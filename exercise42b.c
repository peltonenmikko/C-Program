#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ARRAY_SIZE 39

int main(void)
{
    srand(time(NULL));
    int lotto[ARRAY_SIZE] = {0};    
    int b,c;
    int numbers[7] = {0};


for(b=0,c=0; b<8; b++)
{
    int a=(rand()%39 +1);
   
   if(lotto[a-1]==0)
   {
    lotto[a-1] = 1;
    numbers[c] = a-1;
    c++;
   }
}


printf("User played numbers: ");
for(b=0; b<7; b++)
{
    printf("%d", numbers[b]);

    if(b<6)
    {
        printf(", ");
    }
}
}