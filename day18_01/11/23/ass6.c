//wap to find second largest number present in an array using pointer

#include <stdio.h>
 int main()
 {
    int n,i,largest,second_largest;

    printf("Enter the size of array : ");
    scanf("%d",&n);

    int a[n];

    printf("Enter the elements of array : ");

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int *p;

    p = a;

    largest = *p;

    for ( i = 0; i < n; i++)
    {
        if(*(p+i)>largest)
        {
            second_largest = largest;
            largest = *(p+i);
        }
        else if(*(p+i)>second_largest && *(p+i)!=largest)
        {
            second_largest = *(p+i);
        }
    }

    printf("Second largest number is %d",second_largest);   



    return 0;

 }