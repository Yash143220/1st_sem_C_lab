/*
WAP to compare 2 string
*/

#include <stdio.h>
#include <string.h>
#define SIZE 100

void main()
{
    char a[SIZE], b[SIZE];
    printf("Enter the first string\n");
    gets(a);

    printf("Enter the second string\n");
    gets(b);

    if (strcmp(a, b) == 0)
        printf("Entered strings are equal.\n");
    else
        printf("Entered strings are not equal.\n");
}