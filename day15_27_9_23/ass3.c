// find the sum of digit of a number upto 2 one digit number
// 7899 = 33 = 6
#include <stdio.h>

int sumDigit(int);

int main()
{
    int n;
    printf("Please enter a number to get the sum of digits up to a single-digit number:\n");
    scanf("%d", &n);

    int result = sumDigit(n);
    printf("The sum of the digits of the number %d is %d.\n", n, result);

    return 0;
}

int sumDigit(int num)
{
    int rem, sum;

AGAIN:
    sum = 0;
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        sum = sum + rem;
    }

    if (sum >= 10)
    {
        num = sum;
        goto AGAIN;
    }

    return sum;
}