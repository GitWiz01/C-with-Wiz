//   ------------------------------Factorial of a no.-----------------------------

#include <stdio.h>

void main()
{
int i,n,factorial=1;


printf("Please enter a number:");
scanf("%d",&n);
printf("\n");

for(i=1;i<=n;i++)
factorial=factorial*i;

printf("Factorial of %d is: %d",n,factorial);
}