#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int isPalindrome(int num)
{
    int original = num;
    int reverse = 0;
    while (0 < num)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    return reverse == original;
}

// int main()
// {
//     printf("%d\n\n", isPalindrome(12321));
//     printf("%d\n\n", isArmstrong(408));

//     return 0;
// }

int isArmstrong(int num)
{
    int original = num;
    int length = (int)log10(num) + 1;
    int sum = 0;
    while (num)
    {
        int digit = num % 10;
        num /= 10;
        sum += (int)pow(digit, length);
    }
    return sum == original;
}
