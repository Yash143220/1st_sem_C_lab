
#include <stdio.h>

int main()
{

    int a, b, size;

    for (a = size / 2; a <= size; a = a + 2)
    {

        for (b = 1; b < size - a; b = b + 2)
            printf(" ");

        for (b = 1; b <= a; b++)
            printf("%c", 3);

        for (b = 1; b <= size - a; b++)
            printf(" ");

        for (b = 1; b <= a - 1; b++)
            printf("%c", 3);

        printf("\n");
    }

    for (a = size; a >= 0; a--)
    {

        for (b = a; b < size; b++)
            printf(" ");

        for (b = 1; b <= ((a * 2) - 1); b++)
            printf("%c", 3);

        printf("\n");
    }
}