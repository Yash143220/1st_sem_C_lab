#include <stdio.h>
int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n, sum;
    float avg;
    int *ptr;
    ptr = arr;
    printf("value of arr[0] using ptr: %d\n", *ptr);
    printf("address of arr: %p\n", &arr);
    printf("address of ptr: %p\n", &ptr);
    ptr = ptr + 2;
    printf("value of arr using ptr: %d\n", *ptr);
    printf("address of arr: %p\n", ptr);
    ptr = ptr - 1;
    printf("value of arr using ptr: %d\n", *ptr);
    printf("address of arr:%p\n", ptr);
}