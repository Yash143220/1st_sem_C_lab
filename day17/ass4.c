// wap to add any integer number till entering zero (0) without using loop , use goto statement

#include <stdio.h>

int main()
{
    int n, sum = 0;
AGAIN:
    printf("Enter a number to add to the sum:\n");
    scanf("%d", &n);

    sum += n;
    if (n != 0)
    {
        goto AGAIN;
    }

    printf("The sum of the numbers is %d.\n", sum);

    return 0;
}