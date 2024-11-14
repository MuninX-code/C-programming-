#include <stdio.h>  // write a perograme to swap the values of two variable without using a third variable. use only addition and subtraction operation

int main() {
    int a, b;
    
    // Step 1: Take input from the user
    printf("Enter the value of a:\n");
    scanf("%d", &a);

    printf("Enter the value of b:\n");
    scanf("%d", &b);

    // Step 2: Perform the swapping using addition and subtraction
    a = a + b;  // Now, 'a' holds the sum of a and b
    b = a - b;  // Now, 'b' holds the original value of a
    a = a - b;  // Now, 'a' holds the original value of b

    // Step 3: Output the swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
