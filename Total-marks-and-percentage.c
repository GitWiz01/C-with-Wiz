//                   ------Total marks and percentage------

#include <stdio.h>
#include <math.h>

int main()
{
    float m1, m2, m3, m4, m5, sum, per;

        printf("Enter marks of first subject\n");
        scanf("%f",&m1);

        printf("Enter marks of first subject\n");
        scanf("%f",&m2);

        printf("Enter marks of first subject\n");
        scanf("%f",&m3);

        printf("Enter marks of first subject\n");
        scanf("%f",&m4);

        printf("Enter marks of first subject\n");
        scanf("%f",&m5);

        sum= m1+m2+m3+m4+m5;
        per= sum/5; //The two zero in 500 cancels with two zeros of 100. Therefore, divided it by 5 instead of 500.

        printf("Total marks are %f\n",sum);
        printf("total percentage is %f\n",per);
        
return 0;
}