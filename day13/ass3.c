// WAP to print fibonacci series which start with 2 and 3 upto n term using function
#include <stdio.h>

void series(int);

int main()
{
    int n;
    printf("Enter the number of terms:");
    scanf("%d", &n);
    series(n);
}

void series(int n)
{
    int i, t1 = 2, t2 = 3, nextTerm;
    
    printf("Fibonacci Series:");
    for (i = 1; i <= n; ++i)
    {
        printf(" %d", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}