/*wap to print all number present in a 1D array which having numbers like 7,9,5,12,19,92,6,76,25,13 except 19, 76 and 12 using continue statement  */

#include <stdio.h>

void main()
{
    int a[10] = {7, 9, 5, 12, 19, 92, 6, 76, 25, 13};

    for (int i = 0; i < 10; i++)
    {
        if (a[i] == 19 || a[i] == 76 || a[i] == 12)
        {
            continue;
        }
        printf("%d\n", a[i]);
    }
}
