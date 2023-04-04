#include <stdio.h> 
#include <math.h> // Here math.h headr file is added to use pow function which is predefined in it.
// .h is extension of header file.

int main()
{
    long int A,r; // A is area and r is radius 
    printf("enter radius\n");
    scanf("%ld",&r); 

    A=4*pow(r,2); // Here r is given power of 2. This is a basic syntax to give power to any variable.
    printf("%ld",A);
    
    return(0);


}