#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int isPalindrome(int num)
{
    int length = (int)log10(num) + 1;
    return recursivePalindrome(num, length, 0);
}

int recursivePalindrome(int num, int length, int i)
{
    if (length / 2 < i)
    {
        return 1;
    }
    int left = (num / (int)pow(10, i)) % 10;
    int right = (num / (int)pow(10, length - i - 1)) % 10;
    if (left != right)
    {
        return 0;
    }
    return recursivePalindrome(num, length, i + 1);
}

int isArmstrong(int num)
{
    int length = (int)log10(num) + 1;
    return recursiveArmstrong(num, 0, num, length);
}

int recursiveArmstrong(int num, int sum, int original, int n)
{
    if (num == 0)
    {
        return (sum == original);
    }
    int digit = num % 10;
    sum += (int)pow(digit, n);
    num /= 10;
    return recursiveArmstrong(num, sum, original, n);
}

// int isPalindrome(int num)
// {
//     if (num < 10)
//     {
//         return 1;
//     }
//     int firstDigit = num / ((int)(pow(10, (int)log10(num))));
//     if (num % 10 != firstDigit)
//     {
//         return 0;
//     }
//     num /= 10;
//     int a = 1;
//     int smallerNum = 0;
//     while (num / a != 0)
//     {
//         smallerNum = (num - (a * (num / a)));
//         a *= 10;
//     }
//     return isPalindrome(smallerNum);
// }

// int main()
// {
//     printf("%d\n", isPalindrome(12321));
//     printf("%d\n", isArmstrong(407));
//     return 0;
// }