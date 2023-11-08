// WAP to swap 2 number by call by reference method(without using third variale)

#include <stdio.h>

void swap(int *, int *); // function prototype
void main()              // calling function
{
    int n1, n2;

    printf("Enter 2 number to swap\n");
    scanf("%d%d", &n1, &n2);

    printf("Before swap value of n1 = %d and n2 is %d\n", n1, n2);

    swap(&n1, &n2); // actual argument

    printf("After swap value of n1 = %d and n2 = %d\n", n1, n2);
}

void swap(int *x, int *y)
{

    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;

    printf("Value of x = %d y = %d in swap function\n", *x, *y);
}
