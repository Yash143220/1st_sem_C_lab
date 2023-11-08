#include <stdio.h>
void main()
{
    int i, n, t1 = 2, t2 = 3, nextTerm;
    printf("Enter the number of terms:");
    scanf("%d", &n);
    printf("Fibonacci Series:");
    for (i = 1; i <= n; ++i)
    {
        printf("%d", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

