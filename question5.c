#include <stdio.h>   // write a programme to swap the values of two variables without using a third variable use only multiplication and division

int main()
{
    int a, b;

    // input the vaules of a and b
    printf("enter the value of a:\n");
    scanf("%d", &a);

    printf("enter the value of b:\n");
    scanf("%d", &b);

    // swapping using multiplication and division only

    a = a * b;
    b = a / b;
    a = a / b;

    // output the swapped values
    printf("after swapping: a = %d, b = %d\n", a, b);

    return 0;
}