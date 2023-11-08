// write a program to show the largest number stored in an array

#include <stdio.h>

void main()
{
    int i, n, large, sec_lar;

    printf("enter the size of the array\n");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)

    {
        printf("\n enter the number: ");
        scanf("%d", &arr[i]);
    }
    large = arr[0]; // [1,2,7,4,9]
    for (i = 1; i < n; i++)
    {
        if (arr[i] > large) 
        {
            sec_lar = large;
            large = arr[i];
        }
    }
    printf("\nThe largest number is %d and second largest is %d \n", large,sec_lar);
}