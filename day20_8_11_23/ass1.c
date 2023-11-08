/*wap to compute sum of all element in a array using pointer using dynamic memory allocation*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr, i, n, sum = 0;

    printf("Enter the size of array:\n");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    printf("Enter the elements of the array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    for (i = 0; i < n; i++)
    {
        sum += *(ptr + i);
    }

    printf("Sum of the elements of the array is %d", sum);

    return 0;
}