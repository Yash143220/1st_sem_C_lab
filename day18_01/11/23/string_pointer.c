#include<stdio.h>

int main()
{
    char str[100];

    char *ptr;
    printf("\nEnter a string: ");
    gets(str);

    ptr = str;
    printf("\nEntered string is: ");
    while(*ptr != '\0')
    {
        printf("%c", *ptr++);
        // printf("%c", *ptr);
        // ptr++;   //same as above
    }

    return 0;
}