#include <stdio.h>

void main()
{
    int rows, i, j;
    char ch = 'A';

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", ch++);
        }
        ch = 'A';
        printf("\n");
        
    }
}