#include <stdio.h>

void main()
{
    printf("Enter the size of array");
    int n, i, high;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter value for %d\n", i);
        scanf("%d", &a[i]);
    }
    high = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > high)
        {
            high = a[i];
        }
    }

    printf("Largest number in this array is  %d\n", high);
}