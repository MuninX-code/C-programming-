#include <stdio.h> // finding simple interest.

int main()
{
    float p = 34.1; // p is the principle amount
    int r = 8;      // r is the annual interest rate
    int t = 5;      // t is the time
    printf("The value of simple interest is %.2f ", (p * r * t) / 100);
    return 0;
}