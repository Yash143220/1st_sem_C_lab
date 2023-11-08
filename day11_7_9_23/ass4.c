// WAP to find transpose of  a matrix

#include <stdio.h>
void main()
{
    int i, j, m, n;
    printf("Enter the order of the matrix \n");
    scanf("%d %d", &m, &n);
    int array[m][n];
    printf("Enter the coefficients of the matrix\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &array[i][j]);
        }
    }
    // printf("Original | Transpose\n");
    // for (i = 0; i < m; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         printf(" %d", array[i][j]);
    //     }

    //     printf("   |    ");

    //     for (j = 0; j < m; j++)
    //     {
    //         printf("%d ", array[j][i]);
    //     }

        // printf("\n");
    

    printf("The given matrix is \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix is \n");
    for (j = 0; j < n; ++j)
    {
        for (i = 0; i < m; ++i)
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }
}

