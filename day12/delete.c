// wap to delete an element if found in an array and print before delete and after deleting it if not found regret message
//  IMP

#include <stdio.h>

void main()
{
    printf("Enter the size of the array: ");
    int n, i;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter value for element %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the element to delete: ");
    int d;
    scanf("%d", &d);

    int found = 0;

    printf("Array before deletion: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
        if (a[i] == d)
        {
            found = 1;
        }
    }
    printf("\n");

    if (found)
    {
        int c = n - 1;
        int b[c];
        int k = 0;

        for (i = 0; i < n; i++)
        {
            if (a[i] != d)
            {
                b[k] = a[i];
                k++;
            }
        }

        printf("Array after deleting %d: ", d);
        for (i = 0; i < c; i++)
        {
            printf("%d ", b[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Element %d not found in the array\n", d);
    }
}
