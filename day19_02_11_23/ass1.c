// WAP to find  average of n numbers present in an array using function with pointers to get it.

#include <stdio.h>
double getAverage(int *arr, int size);

int main()
{

    int n, i;

    printf("Enter the size of array:");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements of the array:");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    double avg;
   
    avg = getAverage(a, n);

    printf("Average value is: %.2f\n", avg);
    return 0;
}
double getAverage(int *arr, int size)
{

    int i, sum = 0;
    double avg;

    for (i = 0; i < size; ++i)
    {
        sum += arr[i];
    }

    avg = (double)sum / size;
    return avg;
}
