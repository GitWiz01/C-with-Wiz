//              ------swap values of 2 variables using a 3rd variable------ 

#include<stdio.h>

// Entry point of the program
void main()
{
    // Declare variables for two input numbers and a temporary variable for swapping
    int a, b, temp;

    // Prompt user to enter values for a and b
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    // Swap the values of a and b using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Display the values after swapping
    printf("\nAfter swapping");
    printf("\na = %d", a);
    printf("\nb = %d", b);
}
