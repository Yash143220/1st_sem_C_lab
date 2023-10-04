// wap to find length of a string without using function and using function

#include <stdio.h>
#include <string.h>

int stringlen(char *str)
{
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        count = count + 1;
        i++;
    }

    return count;
}

int main()
{
    char str[100];
    printf("Enter a sentence: ");
    gets(str);

    printf("The length of the largest word is: %d\n", stringlen(str));

    return 0;
}