//                    ------Greatest of three numbers------

#include<stdio.h>

// Entry point of the program
void main()
{
    // Declare variables for three input numbers
    int a, b, c;

    // Prompt user to enter values for a, b, and c
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    // Compare the numbers to find the greatest
    if (a > b)
    {
        if (a > c)
        {
            printf("\na is the greatest.");
        }
        else
        {
            printf("\nc is the greatest.");
        }
    }
    else
    {
        if (b > c)
        {
            printf("\nb is the greatest.");
        }
        else
        {
            printf("\nc is the greatest.");
        }
    }
}
