#include <stdio.h>    // 8. find the area of the rectangle

int main()
{
    int length, breadth;

    printf("enter length:\n");
    scanf("%d", &length);

    printf("enter breadth:\n");
    scanf("%d", &breadth);

    printf("The ares of the rectangle is:%d", length * breadth);

    return 0;
}