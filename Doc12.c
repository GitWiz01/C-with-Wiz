 //                         ------Even or Odd------

#include<stdio.h>

// Entry point of the program
void main()
{
    // Declare variable for the input number
    int n;

    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is even
    if (n % 2 == 0)
    {
        printf("\n%d is an even number.", n);
    }
    else
    {
        printf("\n%d is an odd number.", n);
    }
}
