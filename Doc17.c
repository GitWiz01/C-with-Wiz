//                        ------fibonacci series for n terms------
//  The Fibonacci sequence is a type series where each number is the sum of the two that precede it.
//  It starts from 0 and 1 usually. The Fibonacci sequence is given 
//  by 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, and so on. The numbers in the Fibonacci sequence 
//  are also called Fibonacci numbers.

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
