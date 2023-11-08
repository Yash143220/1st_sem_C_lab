/*wap to find the largest element stored in an array of n elements using dynamic memory allocation*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr, i, n, largest_num;

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

    largest_num = *ptr;

    for (i = 1; i < n; i++)
    {
        if (*(ptr + i) > largest_num)
        {
            largest_num = *(ptr + i);
        }
    }

    printf("Largest number in the array is %d", largest_num);

    return 0;
}