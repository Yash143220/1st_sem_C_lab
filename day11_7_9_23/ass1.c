// WAP to provide value for the matrix and print on screen

#include <stdio.h>

void main()
{
    printf("Enter the size of matrix: ");
    int row, col, i, j;
    scanf("%d%d", &row, &col);

    int a[row][col];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Pls enter the value for matrix [%d][%d] elements:\n",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%4d", a[i][j]);
        }
            printf(" \n");
    }
}