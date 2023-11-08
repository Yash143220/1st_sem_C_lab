// WAP to search a element in a matrix if it is present print its border elements with itself

#include <stdio.h>

void main()
{
    printf("Enter the size of matrix: ");
    int row, col, i, j, k, l;
    scanf("%d%d", &row, &col);

    int a[row][col];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Please enter the value for matrix [%d][%d] element:\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == 0 || j == 0 || i == row - 1 || j == col - 1)
            {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
}