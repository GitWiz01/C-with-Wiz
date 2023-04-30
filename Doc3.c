//                     ------multiplication of 2 numbers------

#include <stdio.h> 

int main()
{
    long int a,b,c; 


    printf("enter first number\n");
    scanf("%ld",&a);
     
    printf("enter second number\n");
    scanf("%ld",&b); 

    c=a*b; // * is multipliacation operator, here a and b are called operands.
    // similarly / is and operators used to find the quotient.
    // % use to find remainder.
    //- use to find differece.
    printf("%ld",c);
    
    return(0);

}