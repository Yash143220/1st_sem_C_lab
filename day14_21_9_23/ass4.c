// WAP to find factorial of a number using recursion

#include <stdio.h>

int facto(int n);

int main()
{
    int n, r;
    printf("Enter a positive integer:");
    scanf("%d", &n);

    r = facto(n);
    printf("factorial of %d  is %d", n, r);
}

int facto(int num)
{
    if (num == 0 || num == 1)
        return 1;
    else
        return num * facto(num - 1); // sum() call itself;
}