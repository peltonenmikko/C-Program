#include <stdio.h>

int main(void)

{
    float kmh;
    float mph;

    printf("give speed in km/h ");
    scanf("%f", &kmh);

    mph = (kmh * 0.6213);

    printf("speed in mph = %.1f miles/h", mph);
}