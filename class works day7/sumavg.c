#include <stdio.h>

void main()
{
    int a, b, c, d, e, f, g, h, i, j, avg , sum;

    printf("Enter 10 numbers:");
    scanf("%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);

    sum = a + b + c + d + e + f + g + h + i + j;
    avg = sum / 10;

    printf("The sum and avg  of the given 10 number is %d and %d\n", sum, avg);
}