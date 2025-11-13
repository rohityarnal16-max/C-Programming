// C program  for Logical Operator
#include <stdio.h>
int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Display logical operation results
    printf("\nResults of Logical Operations:\n");

    printf("(a && b) : %d\n", (a && b));   // Logical AND
    printf("(a || b) : %d\n", (a || b));   // Logical OR
    printf("(!a)     : %d\n", (!a));       // Logical NOT for a
    printf("(!b)     : %d\n", (!b));       // Logical NOT for b

    return 0;
}
