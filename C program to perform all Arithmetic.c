//  C program to perform all Arithmetic Operations ( + , - , * , / )
#include <stdio.h>
int main() {
    float num1, num2;  
    float sum, difference, product, division;

    
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    if (num2 != 0)
        division = num1 / num2;
    else {
        printf("Division by zero is not allowed.\n");
        return 1; 
    }

    
    printf("\nResults:\n");
    printf("Addition: %.2f\n", sum);
    printf("Subtraction: %.2f\n", difference);
    printf("Multiplication: %.2f\n", product);
    printf("Division: %.2f\n", division);

    return 0;
}


