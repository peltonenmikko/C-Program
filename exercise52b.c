#include <stdio.h>
#include <math.h>

int ask_integer_number(int min, int max, int num);
int main(void)
{
    int
    min,
    max,
    num;

//Give voltage
    min = 0, max = 100;
    printf("Give Voltage between %d and %d: ", min, max);
    scanf("%d", &num);
    float voltage = ask_integer_number(min, max, num);

//Give resistance
    min = 1, max = 65;
    printf("Give Resistance between %d and %d: ", min, max);
    scanf("%d", &num);
    float resistance = ask_integer_number(min, max, num);

//Calculate current and power
    float current = voltage/resistance;
    float power = current*voltage;

//Print results
    printf("\nPower consumption in %.0f ohm resistance with %.0f V voltage is %.0f W and current is %.1f A", resistance, voltage, power, current);
}

//Number range check
int ask_integer_number(int min, int max, int num)
{


    if(num<min || num>max)
    {
        while(num<min || num>max)
        {
        printf("Number was not in range (%d-%d): ", min, max);
        scanf("%d",&num);
        }
    }

    return num;
}
