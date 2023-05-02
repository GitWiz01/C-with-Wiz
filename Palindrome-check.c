//           ------check whether a number is palindrome or not------
//        A palindromic number (also known as a numeral palindrome or a numeric palindrome) is a number (such as 16461) that remains the same when its digits are reversed.

#include <stdio.h>

int main()
{
    int i, n, rem, original, rev = 0;

    printf("Enter the number\n");
    scanf("%d", &n);

    original = n;
    
    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        rev = rev * 10 + rem;
    }
    if (rev == original)
    {
        printf("Entered number is a palindrome\n");
    }
    else
    {
        printf("Entered number is not a palindrome\n");
    }

    return 0;
}
