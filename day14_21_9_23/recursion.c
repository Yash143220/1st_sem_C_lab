#include <stdio.h>

int sum(int n);

int main()
{
    int n, r;
    printf("Enter a positive integer:");
    scanf("%d", &n);

    r = sum(n);
    printf("sum = %d", r);
}

int sum(int num)
{
    if (num != 0)
        return num + sum(num - 1); // sum() call itself
    else
        return num;
}