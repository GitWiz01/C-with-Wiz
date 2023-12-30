//                          ------Leap year or not------

#include<stdio.h>

// Entry point of the program
void main()
{
    // Declare variable for the input year
    int year;

    // Prompt user to enter a year
    printf("Enter a number: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if ((year % 4 == 0 || year % 400 == 0) && year % 100 != 0)
    {
        printf("\n%d is a leap year.", year);
    }
    else
    {
        printf("\n%d is not a leap year.", year);
    }
}
