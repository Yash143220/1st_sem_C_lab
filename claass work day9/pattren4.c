#include <stdio.h>

void main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    int a = 1;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("   ");
        }

        for (int j = i; j <= rows; j++)
        {
            printf("%3d", a);
            a++;
        }

        printf("\n");
    }
}
