// C program for Input and Display Various Data Types
#include <stdio.h>
int main() {
    int a;          // integer
    float b;        // float
    char c;         // character
    double d;       // double (large decimal)

    // Taking input from user
    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a float value: ");
    scanf("%f", &b);

    printf("Enter a character: ");
    scanf(" %c", &c);   // note the space before %c to skip newline

    printf("Enter a double value: ");
    scanf("%lf", &d);

    // Displaying the values
    printf("\n--- Displaying Entered Values ---\n");
    printf("Integer: %d\n", a);
    printf("Float: %.2f\n", b);
    printf("Character: %c\n", c);
    printf("Double: %.4lf\n", d);

    return 0;
}
