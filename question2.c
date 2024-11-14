#include <stdio.h>  // 2. write a c programme that declares two int variables and perform additon , subtraction, multiplication and division ,printing the result for each operation


int main()
{
    int num1 = 10;
    int num2 = 15;

    int sum = num1 + num2;
    int subtract = num1 - num2;
    int multiply = num1 * num2;
    float division = num1 / num2;

    // sum
    printf("The value of sum:%d\n", sum);
    // subtract
    printf("The value of subtract:%d\n", subtract);
    // multiply
    printf("The vaule of multiply:%d\n", multiply);
    // division
    printf("The value of division:%f\n", division);

    // or

    printf("Sum: %d\n", num1 + num2);
    printf("Subtract: %d\n", num1 - num2);
    printf("Multiply: %d\n", num1 * num2);
    printf("Division: %.2f\n", (float)num1 / num2);

    return 0;
}