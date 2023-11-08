#include <stdio.h>
#include <stdlib.h>

int **allocate(int h, int w)
{
    int **p;
    int i, j;

    p = (int **)calloc(h, sizeof(int *));
    for (i = 0; i < h; i++)
    {
        p[i] = (int *)calloc(w, sizeof(int));
    }

    return p;
}

void read_data(int **p, int h, int w)
{
    int i, j;
    for (i = 0; i < h; i++)
    {
        for (j = 0; j < w; j++)
        {

            scanf("%d", &p[i][j]);
        }
    }
}

void print_data(int **p, int h, int w)
{
    int i, j;

    printf("The array read as:\n");
    for (i = 0; i < h; i++)
    {
        for (j = 0; j < w; j++)
        {

            printf("%5d", p[i][j]);
        }
        printf("\n");
    }
}

int main()
{

    int **p;
    int M, N;

    printf("Give M and N\n");
    scanf("%d%d", &M, &N);

    p = allocate(M, N);

    read_data(p, M, N);

    print_data(p, M, N);

    return 0;
}