// WAP to print upto nth term in a finonacci series which start with 2 and 3

#include <stdio.h>

int series(int);

int main()
{
    int n;
    printf("Enter the number of terms:");
    scanf("%d", &n);

    printf("Fibonacci Series:");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", series(i));
    }
}

int series(int n)
{
    if (n == 0)
    {
        return 2;
    }
    else if (n == 1)
    {
        return 3;
    }
    else
    {
        return series(n - 1) + series(n - 2);
    }
}
