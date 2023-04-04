#include <stdio.h>

int main()
{
    int a, b, c; // let a=2 and b=4

    printf("Enter first number\n");
    scanf("%d", &a);

    printf("Enter second number\n");
    scanf("%d", &b);

    c = a; // here value of a is saved in c first            value of c is 2 now

    a = b; // now value of b (i.e. 4) is saved in a          value of a is 4 now. Swaping of a is done

    b = c; // now value of c (i.e. 2) is saved in b          value of b is 2 now. Swaping of b is also done

    printf("After swaping the first number is %d\n", a);
    printf("After swaping the second number is %d\n", b);

    return 0;
}