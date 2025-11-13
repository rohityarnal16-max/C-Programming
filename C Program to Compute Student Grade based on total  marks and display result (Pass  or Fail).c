//  C Program to Compute Student Grade based on total  marks and display result (Pass/Fail).
 #include <stdio.h>
int main() {
    int marks;

    // Taking input from user
    printf("Enter total marks (out of 100): ");
    scanf("%d", &marks);

    // Checking for valid input
    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
        return 0;
    }

    // Checking grade and result
    if (marks >= 90)
        printf("Grade: A\nResult: Pass\n");
    else if (marks >= 75)
        printf("Grade: B\nResult: Pass\n");
    else if (marks >= 60)
        printf("Grade: C\nResult: Pass\n");
    else if (marks >= 40)
        printf("Grade: D\nResult: Pass\n");
    else
        printf("Grade: F\nResult: Fail\n");

    return 0;
}
