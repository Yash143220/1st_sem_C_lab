#include <stdio.h>
int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int i, *p;
    p = a; // same as p=&a[0]
    for (i = 0; i < 5; ++i)
    {
        printf("\n % d", *(p + i));
    }
    return 0;
}
