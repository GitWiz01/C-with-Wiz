//							------Centigrade to Fahrenheit------


#include <stdio.h>

void main()
{
	float c,f;
	printf("Enter Centigrade=");
	scanf("%f",&c);
	f=(9*c)/5+32;
	
	printf("Fahrenheit=%f",f);
}