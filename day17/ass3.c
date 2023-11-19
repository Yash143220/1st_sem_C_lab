// wap to search  a number present in an 1d array and find the location using break statement

#include <stdio.h>

void main()
{
    int n, k;

    printf("Enter the number of element\n");
    scanf("%d", &n);
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        printf("Enter the value for element %d\n", i);
        scanf("%d", &a[i]);
    }
    

    printf("Enter the number to search:\n");
    scanf("%d", &k);

    for ( int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            printf("The number %d is present at location %d\n", k, i);
            break;
        }
        
    }
    
}