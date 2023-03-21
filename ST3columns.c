#include <stdio.h>
int main(void)
{
    int rows;
    int num2;
    int y;
    int i;

    printf("Input rows: ");
    scanf("%d", &rows);

    num2 = 1;

for(i=1; i<=rows; i++,num2++){

    printf("\n");

  for(y=1; y<=i; y++ )
     printf("%d",num2);
     
}

}
