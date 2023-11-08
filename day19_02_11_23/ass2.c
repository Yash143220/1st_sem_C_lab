// WAP to print address of an array with address of array pointed by a pointer which will point to that array..then using above concept..try to show addition, substraction, increment and decrement operation based on that..and also print address after each operation and display it.

#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    printf("Address of array: %p\n", arr);
    printf("Address pointed by pointer: %p\n", ptr);

    ptr++;
    printf("After increment operation, address pointed by pointer: %p\n", ptr);

    ptr--;
    printf("After decrement operation, address pointed by pointer: %p\n", ptr);

    ptr += 2;
    printf("After addition operation, address pointed by pointer: %p\n", ptr);

    ptr -= 1;
    printf("After subtraction operation, address pointed by pointer: %p\n", ptr);

    return 0;
}