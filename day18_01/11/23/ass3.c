//wap to copute the sum of all element of array using pointer

#include<stdio.h>

int main()

{

    int n, sum = 0;

    printf("Enter the size of array : ");
    scanf("%d",&n);

    int a[n];
    
    printf("Enter the elements of array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int *p;

    p = a;

    for(int i=0;i<n;i++)
    {
        sum = sum + *(p+i);
    }

    printf("Sum of all elements of array is %d", sum);

    return 0;
}