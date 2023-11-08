#include <stdio.h>

void main()
{

    int a[5] = {11, 22, 33, 44, 55};

    printf("%d\n", a[1]++);    // 33
    printf("%d\n", (a[1] += 1)); // 23
}