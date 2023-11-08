#include <stdio.h>

int main()
{
    int num;
    int *ptr;
    int **ptr1;

    ptr1 = &ptr;
    ptr = &num;
    num = 20;

    printf("\nUsing value num:");
    printf("\nValue of variable num %d", num);
    printf("\nAddress of varuiable num: %u", &num);

    printf("\nUsing pointer variable:");
    printf("\nValue of variable num %d", *ptr); /*pointer variable starts with * holds value of pointer*/
    printf("\nAddress of varuiable num: %u", ptr);

    printf("\nAddress Of pointer %u", &ptr);

    // Using ptr 1 try to print num value

    printf("\nValue of  num %d", **ptr1);
    return 0;
}
