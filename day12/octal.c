// wap to find octal equavalent of a decimal no. eg (152)10 to ( )8#include <stdio.h>

#include<stdio.h>
void main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    int octal = 0, i = 1;

    while (n > 0)
    {
        int rem = n % 8;
        octal += rem * i;
        n /= 8;
        i *= 10;
    }

    printf("The octal equivalent is: %d\n", octal);
}