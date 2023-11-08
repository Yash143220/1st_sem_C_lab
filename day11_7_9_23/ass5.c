// WAP to multiply 2 matrixes
// HINT: search the source code from internet

#include <stdio.h>
int main()
{
    int i, j, k, m, n, p, q;

    printf("\nThe row & column of Matrix A :");
    scanf("%d%d", &m, &n);
    int a[m][n], b[m][n], c[m][n];
    // fflush(stdin);
    printf("\nThe row & column of Matrix B :");
    scanf("%d%d", &p, &q);

    if (n == p)
    {
        printf("\nFor Matrix A:-\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("\nEnter values for A[%d][%d]=> ", i, j);
                scanf("%d", &a[i][j]);
            }
        }

        printf("\nFor Matrix B:-\n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("\nEnter values for B[%d][%d]=> ", i, j);
                scanf("%d", &b[i][j]);
            }
        }
        // Matrix Multiplication Logic
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < n; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("\nMatrix A is\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
                printf("%d\t", a[i][j]);
            printf("\n");
        }
        printf("\n");
        printf("\nMatrix B is\n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
                printf("%d\t", b[i][j]);
            printf("\n");
        }
        printf("\n");
        printf("\nMultiplication Matrix C is\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
                printf("%d\t", c[i][j]);
            printf("\n");
        }
    }
    else
    {
        printf("Matrix is not equal !");
    }
}
