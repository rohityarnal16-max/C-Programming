//  Program to calculate the sum of first n natural  number - while loop
#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    // Taking input from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Using while loop to calculate sum
    while (i <= n) {
        sum = sum + i;
        i++;
    }

    // Displaying result
    printf("The sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}
