// C program for receiving an input from the user at runtime and printing  it
#include <stdio.h>

int main() {
    int num; // variable declaration

    printf("Enter a number: ");  // ask user for input
    scanf("%d", &num);           // take input from user

    printf("given number is: %d\n", num);  // print the entered number

    return 0;
}
