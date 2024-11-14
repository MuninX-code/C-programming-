#include <stdio.h> // 3. ares of a circle
#define PI 3.14159 // difine constant for pi

int main()
{
    float radius, ares;

    // input radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // calculate area
    ares = PI * radius * radius;

    // output the result
    printf("The ares of the circle is: %2.f\n", ares);
    return 0;
}