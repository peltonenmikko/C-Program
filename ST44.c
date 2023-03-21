#include <stdio.h>
#include <math.h>

int main(void)
{
    int num1;
    int b;
    float sum = 0;

    printf("Give number:");
    scanf("%d", &num1);

    for (b=1; b<num1+1; b++){
        if(b%2 == 0){
            sum += b;
        }
    }

    printf("sum=%.0f", sum);

}