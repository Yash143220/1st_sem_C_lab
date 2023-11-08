// wap to reverse a string using pointer

#include <stdio.h>
#include <string.h>

int main()

{

    char str[100];
    char *ptr;

    printf("Enter a string:");
    gets(str);

    ptr = str;

    int length = strlen(str);
    
    for (int i = length; i >= 0; i--)
    {
        printf("%c", *(ptr + i));
    }

    return 0;
}
