/*
WAP to add a cancadinate two string & print it
*/

#include <stdio.h>
#include <string.h>

void main()
{
    char a[100], b[100];

    printf("Enter the first string: ");
    gets(a);

    printf("Enter the second string: ");
    gets(b);

    strcat(a, b);

    printf("String obtained on concatenation is %s\n", a);
}