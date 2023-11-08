// WAP to add two matrixes (if desimilar matrix is present print regret message) // WAP to provide value for the matrix and print on screen

#include <stdio.h>

void main()
{
    int row, row2, col, col2, i, j;
    printf("Enter the size of 1st matrix: ");
    scanf("%d%d", &row, &col);
    printf("Enter the size of 2nd matrix: ");
    scanf("%d%d", &row2, &col2);

    int a[row][col];
    int b[row2][col2];
    int c[row][col];

    if (row != row2 || col != col2)
    {
        printf("The two matrices are not of the same size.\n");
        return;
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Pls enter the value for 1st matrix [%d][%d] elements:\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("Pls enter the value for 2nd matrix [%d][%d] elements:\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("The sum of the two matrices is:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%4d", c[i][j]);
        }
        printf(" \n");
    }
}