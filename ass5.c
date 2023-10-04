// convert a string to a string having all character in capital letters.

#include <stdio.h>

int capital(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("The string in upper case: %s\n", str);
}
int main()
{
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    gets(str);
    capital(str);
    return 0;
}