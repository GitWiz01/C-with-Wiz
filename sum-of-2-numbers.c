#include <stdio.h> 

int main()
{
    long int a,b,c; // This section is called declaration section here we declare variables.
    // long integer take long digit numbers. example: 514574618548721

    printf("enter first number\n");
    scanf("%ld",&a); // scanf is predefined function that takes input from user.
     
    printf("enter second number\n");
    scanf("%ld",&b); // Here ld, d, etc in scanf are called format specifiers. They specify the format in which input is to be taken.

    c=a+b; // This is a addition operation this doesn't require any particular syntax.
    printf("%ld",c);
    
    return(0);

}