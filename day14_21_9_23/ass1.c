// WAP to swap 2 number by call by value method(without using third variable)

#include <stdio.h>
#include<math.h>
void swap(int, int); // function prototype
void main()          // calling function
{
    int n1, n2;

    printf("Enter 2 number to swap\n");
    scanf("%d%d", &n1, &n2);

    printf("Before swap value of n1 = %d and n2 is %d\n", n1, n2);

    swap(n1, n2); // actual argument
}

void swap(int x, int y)
{

    x = x + y;
    y = x - y;
    x = x - y;

    printf("After swap value of n1 = %d and n2 = %d\n", x, y);
}
