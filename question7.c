#include <stdio.h> //7. convert the temperature from celsius to fahrenheit.

int main()
{
    float celsius;
    float fahrenheit;

    printf("enter the temperature of today in celsius:\n");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("todays celsius in fahrenheit is:%.2f\n", fahrenheit);
    return 0;
}