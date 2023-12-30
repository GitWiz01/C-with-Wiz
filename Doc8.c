//							------Centigrade to Fahrenheit------


#include <stdio.h>

// Entry point of the program
void main()
{
    // Declare variables for temperature in Celsius and Fahrenheit
    float c, f;

    // Prompt user to enter temperature in Celsius
    printf("Enter Centigrade: ");
    scanf("%f", &c);

    // Convert Celsius to Fahrenheit using the conversion formula
    f = (9 * c) / 5 + 32;

    // Display the temperature in Fahrenheit
    printf("Fahrenheit: %f", f);
}
