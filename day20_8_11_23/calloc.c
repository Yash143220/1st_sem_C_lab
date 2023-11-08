#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, n;

    printf("Enter the no. of element:");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter the value for %d:", i);
        scanf("%d", ptr + i);
    }
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += *(ptr + i);
    }

    printf("Sum of the array is %d", sum);

    free(ptr);

    return 0;
}