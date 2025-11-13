// C Program to Perform Arithmetic Operation
#include <stdio.h>
int main() {
    int a, b;
    int sum, diff, prod, mod;
    float div;

    // Input two numbers from user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Perform arithmetic operations
    sum = a + b;
    diff = a - b;
    prod = a * b;
    div = (float)a / b;  // typecast to get decimal result
    mod = a % b;

    // Display results
    printf("\nResults:\n");
    printf("Addition: %d\n", sum);
    printf("Subtraction: %d\n", diff);
    printf("Multiplication: %d\n", prod);
    printf("Division: %.2f\n", div);
    printf("Modulus: %d\n", mod);

    return 0;
}
