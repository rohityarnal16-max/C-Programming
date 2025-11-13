// Factorial of  a number
#include <stdio.h>
int main() {
    int n, i;
    unsigned long long factorial = 1; // To handle large results

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Checking for negative input
    if (n < 0)
        printf("Factorial of a negative number doesn't exist.\n");
    else {
        // Calculating factorial using for loop
        for (i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
