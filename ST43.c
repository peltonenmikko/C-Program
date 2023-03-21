#include <stdio.h>
#include <math.h>

int main(void)
{
    float tempc;
    float tempf;
    float windms;
    float windmph;
    float tempchillf;
    float tempchillc;

    printf("Give temperature in Celsius: ");
    scanf("%f", &tempc);

    printf("Give Wind speed in m/s");
    scanf(" %f", &windms);

    windmph = 2.23694*windms;
    tempf = 1.8*tempc+32;


    float wind16 = pow(windmph,0.16);

    tempchillf = (35.74+(0.6215*tempf)-(35.75*wind16)+(0.4275*tempf*wind16));
    tempchillc = 0.55556*(tempchillf-32);

    printf("Feels like: %.2f C", tempchillc);

}