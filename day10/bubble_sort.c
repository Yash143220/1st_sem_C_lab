#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[30], n, i, j, temp, sorted = 0;
    printf("\nHow many times: ");
    scanf("%d", &n);

    printf("\n Enter the array elements: \n");
    for (i = 0; i < n; i++)

        scanf("%d", &a[i]);

    for (i = 0; i < n - 1 && sorted == 0; i++)
    {
        sorted = 1;
        for (j = 0; j < (n - i) - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                sorted = 0;
            }
        }
    }

    printf("\n The number in sorted order \n");
    for (i = 0; i < n; ++i)
        printf("\n %d", a[i]);
}