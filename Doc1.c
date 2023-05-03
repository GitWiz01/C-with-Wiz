//                             ------Datatypes-----

#include <stdio.h>

int main()
{
    int A;
    char B;
    float C;
    double D;

    printf("enter any Integer\n"); 
    scanf("%d", &A);                   //   %d is a format specifier used for integer
    printf("%d\n", A);

    printf("enter any Character\n");
    scanf("%c", &B);                   //   %c is a format specifier used for character
    printf("%c\n", B);

    printf("enter any decimal\n");
    scanf("%f", &C);                    //   %f is a format specifier used for decimal
    printf("%f\n", C);

    printf("enter any decimal\n");
    scanf("%lf", &D);                   //   %lf is a format specifier used for large decimal
    printf("%lf\n", D);
    

    return (0);
}
/*  NOTE ---->  However,%f is a format specifier for float but here we wrote decimal
                well both have a small difference that is, float gives a approximate 
                value whereas decimal gives an exact value.  */


