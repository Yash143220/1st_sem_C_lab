#include <stdio.h>

void main()
{
    printf("Enter the size of array");
    int n, i, s, k, count=0;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter value for %d\n", i);
        scanf("%d", &a[i]);
    }
   
    for (i = 0; i < n; i++)
    {
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                a[j] = -1;
            }
        }
        if (count > 1)
        {
            printf("%d is occur %d times\n", a[i], count);
        }
    }
}