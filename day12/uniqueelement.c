// wap to print all the unique element present in the array

#include <stdio.h>

void main()
{
    printf("Enter the size of array");
    int n, i;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter value for %d:\n", i);
        scanf("%d", &a[i]);
    }

    printf("Unique element in the array is: ");
    for (i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count = 0;
                break;
            }
        }

        if (count)
        {
            printf("%4d", a[i]);
        }
    }
    printf("\n");
}