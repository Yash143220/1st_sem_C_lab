/* calling function
    Call By Value Method
*/
/*
#include <stdio.h>

void swap(int, int); // function prototype
void main()          // calling function
{
    int n1, n2, temp;

    printf("Enter 2 number to swap\n");
    scanf("%d%d", &n1, &n2);

    printf("Before swap value of n1 = %d and n2 is %d\n", n1, n2);

    swap(n1, n2); // actual argument

        printf("After swap value of n1 = %d and n2 = %d\n", n1, n2);
}

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;

    printf("Value of x = %d y = %d in swap function\n", x, y);
}

*/
/* calling function
    Call By Reference
*/

#include <stdio.h>

void swap(int *, int *); // function prototype
void main()          // calling function
{
    int n1, n2, temp;

    printf("Enter 2 number to swap\n");
    scanf("%d%d", &n1, &n2);

    printf("Before swap value of n1 = %d and n2 is %d\n", n1, n2);

    swap(&n1, &n2); // actual argument

    printf("After swap value of n1 = %d and n2 = %d\n", n1, n2);
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    printf("Value of x = %d y = %d in swap function\n", *x, *y);
}
