#include <stdio.h>
#include "NumClass.h"

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printf("The Armstrong numbers are:");
    for (int i = n1; i <= n2; i++)
    {
        if (isArmstrong(i))
        {
            printf(" %d", i);
        }
    }
    printf("\nThe Palindromes are:");
    for (int i = n1; i <= n2; i++)
    {
        if (isPalindrome(i))
        {
            printf(" %d", i);
        }
    }
    printf("\nThe Prime numbers are:");
    for (int i = n1; i <= n2; i++)
    {
        if (isPrime(i))
        {
            printf(" %d", i);
        }
    }
    printf("\nThe Strong numbers are:");
    for (int i = n1; i <= n2; i++)
    {
        if (isStrong(i))
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}