//

#include <stdio.h>

void main()
{
    printf("Enter the size of matrix: ");
    int row, col, i, j, k;
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

    printf("Enter the element to search: ");
    scanf("%d", &k);

    int found = 0;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (a[i][j] == k)
            {
                printf("The value %d is stored in [%d][%d] location.\n", k, i, j);
                found = 1;
            }
            
        }
    }

    if (found==0)
    {
        printf("Sorry, number %d is not found in the matrix.\n", k);
    }
}
