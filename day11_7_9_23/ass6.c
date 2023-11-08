// WAP menu driven program for following activities  [5][5] matrix
/*
press B for printing border elements
press D for diaginal elemenets
press U for upper  diagonal elemenets

*/

//

#include <stdio.h>

void main()
{
    printf("Enter the size of matrix: ");
    int row, col, i, j;
    char l;
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
AGAIN:
    printf("\nChoose the following option:\n");
    printf("Press B to print printing border elements\n");
    printf("Press D to print diaginal elemenets\n");
    printf("Press U to print upper diagonal elemenets\n");
    printf("Press E to end the program.\n");
    scanf(" %c", &l);
    switch (l)
    {
    case 'B':
    case 'b':
        printf("Border Elements are:\n\n");
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                if (i == 0 || j == 0 || i == row - 1 || j == col - 1)
                {
                    printf("%d ", a[i][j]);
                }
                else
                    printf("  ");
            }
            printf("\n");
        }
        break;
    case 'D':
    case 'd':
        printf("Diagonal Elements are:\n\n");
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                if (i == j)
                {
                    printf("%d ", a[i][j]);
                }
                else
                    printf("  ");
            }
            printf("\n");
        }
        break;
    case 'U':
    case 'u':
        printf("Upper Diagonal Elements are:\n\n");
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                if (i < j)
                {
                    printf("%d ", a[i][j]);
                }
                else
                    printf("  ");
            }
            printf("\n");
        }
        break;
    case 'E':
        printf("Program Ended!");
        return;
        break;
    default:
        printf("Invalid option!\n");
    }
    goto AGAIN;
}
