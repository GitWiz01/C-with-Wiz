//            ------sum of even and odd numbers from 1 to n------
#include <stdio.h>

// Entry point of the program
void main()
{
    // Declare variables for loop control, input number, and Fibonacci sequence
    int i, n, a = 0, b = 1, c;

    // Prompt user to enter the number of Fibonacci sequence elements to display
    printf("Enter number: ");
    scanf("%d", &n);

    // Display the Fibonacci sequence using a for loop
    for (i = 1; i <= n; i++)
    {
        // Print the current value of 'a'
        printf("%d\n", a);

        // Calculate the next Fibonacci number in the sequence
        c = a + b;

        // Update 'a' and 'b' for the next iteration
        a = b;
        b = c;
    }
	printf("\nSum of even numbers=%d",sumEven);	
	printf("\nSum of odd numbers=%d",sumOdd);	
}
