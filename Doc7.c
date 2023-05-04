//                  ------Simple Interest and Compound Interest------

#include<stdio.h>
#include<math.h>

void main() 
{
	float p, r, t, a, si, ci;

	printf("Enter Principle=");
	scanf("%f",&p);

	printf("Enter Rate=");
	scanf("%f",&r);

	printf("Enter Time period=");
	scanf("%f",&t);
	
	si=(p*r*t)/100;                         //Formula to calculate SI
	printf("Simple Interest=%f\n",si);

	a = p*(pow((1 + r / 100), t));          //Formula to calculate amount
	ci =  a - p;                            //Formula to calculate CI
	printf("Compound Interest=%f",ci);	

// whether you write return 0 or not it doesn't matter, unless your function really return some value.
//like for example if your function return a number n then you have ti write return n. But if it doesn't return anything like the above function then return 0 can be neglected.
//Don't worry you will gain more clarity in upcoming Docs. 
}