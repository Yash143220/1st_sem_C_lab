// WAP to find sum of digits of a number using recursion

#include <stdio.h>

int digit(int);

int main()
{
    int n, r;
    printf("Enter a positive integer:");
    scanf("%d", &n);

    r = digit(n);
    printf("Sum of digits of number %d is %d", n, r);
}
            
int digit(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return (num % 10) + digit(num / 10);
    }
}