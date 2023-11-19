//wap to find sum of the digit of your roll number into a single sigle digit number using goto statement
//eg. 12345 = 15 = 6 

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
        rem = num % 10; // 3
        num = num / 10;/// 12
        sum = sum + rem;//3
    }

    if (sum >= 10)
    {
        num = sum;
        goto AGAIN;
    }

    return sum;
}