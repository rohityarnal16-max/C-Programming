// Increment/Decrement Operator
#include <stdio.h>

int main() {
    int a;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &a);

    // Display original value
    printf("\nOriginal value of a = %d\n", a);

    // Pre-increment and Post-increment
    printf("After pre-increment (++a): %d\n", ++a);
    printf("After post-increment (a++): %d\n", a++);
    printf("Value of a after post-increment: %d\n", a);

    // Pre-decrement and Post-decrement
    printf("After pre-decrement (--a): %d\n", --a);
    printf("After post-decrement (a--): %d\n", a--);
    printf("Value of a after post-decrement: %d\n", a);

    return 0;
}
