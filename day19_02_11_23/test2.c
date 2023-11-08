
#include <stdio.h>

int abc();

int main()
{
    printf("Sum of 5 int value is %d", abc());
    return 0;
}

int abc()
{
    int a, b, c, d, e;
    printf("Enter 5 int value: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    return (a + b + c + d + e);
}