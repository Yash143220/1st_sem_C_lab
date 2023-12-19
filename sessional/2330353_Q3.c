#include <stdio.h>

int main()
{
    int i, j, n = 5, num = 1;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (j = i; j < n; j++)
        {
            printf("%d", num++);
        }
        num = 1;
        printf("\n");
    }
}