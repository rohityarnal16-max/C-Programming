//  Number Comparison (find biggest number)
#include <stdio.h>
int main() {
    int num1, num2;

    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Comparing numbers
    if (num1 > num2)
        printf("%d is the biggest number.\n", num1);
    else if (num2 > num1)
        printf("%d is the biggest number.\n", num2);
    else
        printf("Both numbers are equal.\n");

    return 0;
}
