#include <stdio.h>

void main()
{

    int a;

    printf("Enter a integer number: ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("The given number is positive\n");
    }
    else if (a == 0)
    {
        printf("The given number is 0\n");
    }
    else
    {
        printf("The given number is negative\n");
    }
}
