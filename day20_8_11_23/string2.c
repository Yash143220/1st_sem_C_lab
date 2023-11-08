#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char* str[3] = {"KIIT", "IITKGP", "IITB"};
    printf("string array elements are:");
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", str[i]);
    }
}