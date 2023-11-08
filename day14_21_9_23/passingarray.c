/*
    Passing array to a function

    Q. calc the sum of all the integers stored in an array
*/

#include <stdio.h>

int SUM_ARRAY(int a[], int);//function prototype

int main()
{
    int a[100], n, i;

    printf("\nEnter how many numbers:");
    scanf("%d", &n);
    printf("\nEnter data of array:");
    for (i = 0; i < n; i++)

        scanf("%d", &a[i]);
    printf("\nThe sum of the elements of the array is %d", SUM_ARRAY(a, n));

    return 0;
}
// user defined function
int SUM_ARRAY(int a[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}