//               ------whether the two numbers are equal or not------ 

#include<stdio.h>

// Entry point of the program
void main()
{
    // Declare variables for two input numbers
    int a, b;

    // Prompt user to enter values for a and b
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    // Check if a is equal to b
    if (a == b)
    {
        printf("\na and b are equal.");
    }
    else
    {
        printf("\na and b are not equal.");
    }
}
