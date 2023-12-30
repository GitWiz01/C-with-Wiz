//           Finds the sum and percentage marks and grade obtained by the student

#include<stdio.h>

// Entry point of the program
void main() 
{
    // Declare variables for marks in different subjects, total marks, and percentage
    int hindi, english, science, math, computer, sum;
    float per;

    // Prompt user to enter marks for each subject
    printf("Enter marks of Hindi: ");
    scanf("%d", &hindi);

    printf("Enter marks of English: ");
    scanf("%d", &english);

    printf("Enter marks of Science: ");
    scanf("%d", &science);

    printf("Enter marks of Math: ");
    scanf("%d", &math);

    printf("Enter marks of Computer: ");
    scanf("%d", &computer);

    // Calculate the total marks
    sum = hindi + english + science + math + computer;

    // Display the sum of marks
    printf("\nSum of marks: %d", sum);

    // Calculate the percentage
    per = (float)sum / 5;

    // Display the percentage
    printf("\nPercentage of marks: %f", per);

    // Determine and display the grade based on the percentage
    if (per >= 90 && per <= 100)
    {
        printf("\nGrade A");
    }
    else if (per >= 80 && per < 90)
    {
        printf("\nGrade B");
    }
    else if (per >= 60 && per < 80)
    {
        printf("\nGrade C");
    }
    else if (per < 60)
    {
        printf("\nGrade D");
    }
}
