// WAP to add those int numebrs which is multiple of 4 present in an array using concept passing  array to a function

#include <stdio.h>

int SUM_ARRAY(int [], int); // function prototype

int main()
{
    int a[100], n, i;

    printf("\nEnter how many numbers:");
    scanf("%d", &n);
    printf("\nEnter data of array:");
    for (i = 0; i < n; i++)

        scanf("%d", &a[i]);
    printf("\nThe sum of the elements of the array which is multiple of 4 is %d", SUM_ARRAY(a, n));

    return 0; 
}
// user defined function
int SUM_ARRAY(int a[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 4 == 0)
        {
            sum += a[i];
        }
    }
    return sum;
}