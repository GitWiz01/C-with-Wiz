//               ------Basic calculator operations using switch case------
 #include <stdio.h>

// Entry point of the program
void main()
{
    // Declare variables for user choice, and two numbers 'a' and 'b'
    int choice, a, b;

    // Display menu for the user to choose an operation
    printf("Select your choice:\n");
    printf("1- Add:\n");
    printf("2- Sub:\n");
    printf("3- Mul:\n");
    printf("4- Div:\n");
    printf("5- Mod:\n");

    // Prompt user to enter values for 'a' and 'b'
    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);

    // Prompt user to enter their choice
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Use a switch statement to perform the chosen operation
    switch (choice)
    {
        // Case 1: Addition
        case 1:
            printf("Addition of a and b: %d", (a + b));
            break;

        // Case 2: Subtraction
        case 2:
            printf("Subtraction of a and b: %d", (a - b));
            break;

        // Case 3: Multiplication
        case 3:
            printf("Multiplication of a and b: %d", (a * b));
            break;

        // Case 4: Division
        case 4:
            printf("Division of a and b: %d", (a / b));
            break;

        // Case 5: Modulus
        case 5:
            printf("Modulus of a and b: %d", (a % b));
            break;

        // Default case: Invalid choice
        default:
            printf("Wrong choice");
    }
}
