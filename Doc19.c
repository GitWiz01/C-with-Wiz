//           ------check whether a number is palindrome or not------
//        A palindromic number (also known as a numeral palindrome or a numeric palindrome) is a number (such as 16461) that remains the same when its digits are reversed.

#include <stdio.h>

int main()
{
    // Declare variables for input number, original number, remainder, and reversed number
    int n, original, rem, rev = 0;

    // Prompt user to enter a number
    printf("Enter the number\n");
    
    // Read the input number
    scanf("%d", &n);

    // Store the original number for later comparison
    original = n;
    
    // Reverse the digits of the number
    while (n != 0)
    {
        // Extract the last digit of the number
        rem = n % 10;

        // Remove the last digit from the number
        n = n / 10;

        // Build the reversed number by adding the extracted digit
        rev = rev * 10 + rem;
    }

    // Check if the reversed number is equal to the original number
    if (rev == original)
    {
        // If equal, print that the entered number is a palindrome
        printf("Entered number is a palindrome\n");
    }
    else
    {
        // If not equal, print that the entered number is not a palindrome
        printf("Entered number is not a palindrome\n");
    }

    // Return 0 to indicate successful completion
    return 0;
}

