/*Dynamically allocate the size of an array using calloc, insert elements into the array, then print the elements. Change the size of the array, get the new elements and print the array. Finally free the memory.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, n2, *ptr;

    printf("Enter the size of array:");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

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

    printf("Given Array is:");

    for (i = 0; i < n; i++)
    {
        printf("%3d", *(ptr + i));
    }

    printf("\nEnter the new size of array:");
    scanf("%d", &n2);
    // ptr = realloc(ptr, n2);
    // ptr = (int *)calloc(n2, sizeof(int));

    ptr = (int *)realloc(ptr, n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    printf("Enter the elements of the array:");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("Given Array is:");

    for (i = 0; i < n2; i++)
    {
        printf("%3d", *(ptr + i));
    }

    free(ptr);
    return 0;
}