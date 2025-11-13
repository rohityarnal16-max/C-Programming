// C program for  Comma Operator
#include <stdio.h>
int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n--- Arithmetic Operators ---\n");
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", a, b, a / b);
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);

    printf("\n--- Relational Operators ---\n");
    printf("%d == %d : %d\n", a, b, a == b);
    printf("%d != %d : %d\n", a, b, a != b);
    printf("%d > %d  : %d\n", a, b, a > b);
    printf("%d < %d  : %d\n", a, b, a < b);

    printf("\n--- Logical Operators ---\n");
    printf("(a && b) : %d\n", (a && b));
    printf("(a || b) : %d\n", (a || b));
    printf("!a : %d\n", !a);
    printf("!b : %d\n", !b);

    printf("\n--- Increment / Decrement ---\n");
    printf("a++ = %d\n", a++);
    printf("After a++ , a = %d\n", a);
    printf("--b = %d\n", --b);

    printf("\n--- Conditional Operator ---\n");
    int max = (a > b) ? a : b;
    printf("Largest number is: %d\n", max);

    return 0;
}
