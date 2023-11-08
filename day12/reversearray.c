/*
    wap to reverse a array element i.g.1,5,7,2,3,9 o/p 9,3,2,7,5,1
*/

#include <stdio.h>

void main()
{
    printf("Enter the size of array: ");
    int n, i;
    scanf("%d", &n);
    int a[n];
    int b[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter value for %d:\n", i);
        scanf("%d", &a[i]);
    }
    printf("Entered array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
    printf("\n");
    int k = 0;
    for (i = n - 1; i >= 0; i--)
    {
        b[k++] = a[i];
    }

    printf("Reversed of this array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%4d", b[i]);
    }
}