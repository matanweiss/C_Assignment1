#include <stdio.h>
#include "NumClass.h"
// int main()
// {
// printf("%d\n", isPrime(1));
// printf("%d\n", isPrime(0));
// printf("%d\n", isPrime(7));
// printf("%d\n", isPrime(31));
// printf("%d\n", isPrime(21));
//     printf("%d\n", isStrong(0));
//     printf("%d\n", isStrong(1));
//     printf("Ahalan\n\n");
//     return 0;
// }

int isStrong(int num)
{
    int originalNum = num;
    int digit = 1;
    int sum = 0;
    while (0 < num)
    {
        digit = num % 10;
        num = num / 10;
        sum += factorial(digit);
    }
    return (sum == originalNum && originalNum != 0);
}

int factorial(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
}

int isPrime(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return num == 0 ? 0 : 1;
}