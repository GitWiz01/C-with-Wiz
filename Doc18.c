//   ------------------------------Factorial of a no.-----------------------------

#include <stdio.h>

// Entry point of the program
void main()
{
    // Declare variables for loop control, input number, and factorial
    int i, n, factorial = 1;

    // Prompt user to enter a number
    printf("Please enter a number: ");

    // Read the input number
    scanf("%d", &n);
    printf("\n");

    // Calculate factorial using a for loop
    for (i = 1; i <= n; i++)
    {
        // Multiply the current value of factorial by the loop variable
        factorial = factorial * i;
    }

    // Print the calculated factorial
    printf("Factorial of %d is: %d", n, factorial);
}
