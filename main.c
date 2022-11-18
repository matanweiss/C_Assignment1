#include <stdio.h>
#include "NumClass.h"

int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    printf("Prime numbers: ");
    for (int i = n1; i <= n2; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\nArmstrong numbers: ");
    for (int i = n1; i <= n2; i++)
    {
        if (isArmstrong(i))
        {
            printf("%d ", i);
        }
    }
    printf("\nStrong numbers: ");
    for (int i = n1; i <= n2; i++)
    {
        if (isStrong(i))
        {
            printf("%d ", i);
        }
    }
    printf("\nPalindrome numbers: ");
    for (int i = n1; i <= n2; i++)
    {
        if (isPalindrome(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}