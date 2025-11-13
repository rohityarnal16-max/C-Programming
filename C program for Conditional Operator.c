// C program for Conditional Operator
#include <stdio.h>
int main() {
    int a, b, max;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Using conditional (ternary) operator to find the largest number
    max = (a > b) ? a : b;

    // Display result
    printf("\nThe largest number is: %d\n", max);

    return 0;
}
