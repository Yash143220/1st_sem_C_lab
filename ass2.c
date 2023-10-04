//wap to find concadinate two string without usning liberary function

#include <stdio.h>

int concadinate(char *str1, char *str2)
{
    int i = 0, j = 0;
    while (str1[i] != '\0')
    {
        i++;
    }

    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';

    printf("The concatinated string is: %s\n", str1);
}
int main()
{
    char str1[100], str2[100];
    printf("Enter a string: ");
    gets(str1);
    printf("Enter another string: ");
    gets(str2);

    concadinate(str1, str2);

    return 0;
}
