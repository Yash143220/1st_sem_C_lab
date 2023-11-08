#include <stdio.h>

void main()
{
    printf("Enter the size of array");
    int n, i, s, k;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter value for %d\n", i);
        scanf("%d", &a[i]);
    }
    printf("Enter the number to search\n");
    scanf("%d", &k);

    for (i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            printf("The number is stored in   %dth location.\n", i);
        }
    }
}