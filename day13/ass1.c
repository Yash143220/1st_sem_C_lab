#include <stdio.h>

int facto();

void main()
{
    printf("The factorial is %d\n", facto());
}

int facto()
{
    int num, i = 1, fact = 1;
    printf("Enter the number:");
    scanf("%d", &num);

    while (i <= num)
    {
        fact = fact * i;
        i++;
    }

    return (fact);
}
