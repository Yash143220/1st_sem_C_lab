#include <stdio.h>

void main()
{
    int num, i = 1, fact = 1;
    printf("Enter the number:");
    scanf("%d", &num);

    while (i <= num)
    {
        fact = fact * i;
        i++;
    }
    printf("The factorial of %d is %d\n", num, fact);
}
