#include <stdio.h>

int main()
{
    int n, i, j, count = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf("    ");
        }

        for (j = i; j <= n; j++)
        {
            printf("%4d", count++);
        }

        printf("\n");
    }
}