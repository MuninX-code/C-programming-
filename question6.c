#include <stdio.h> // 6. take 3 input from the user and claculate the average.

int main()
{
    int num1, num2, num3;
    int sum;
    float average;

    printf("enter the value of num1:\n");
    scanf("%d", &num1);

    printf("enter the value of num2:\n");
    scanf("%d", &num2);

    printf("enter the value of num3:\n");
    scanf("%d", &num3);

    sum = num1 + num2 + num3;

    average = sum / 3.0;

    printf("average is: %.2f", average);

    return 0;
}