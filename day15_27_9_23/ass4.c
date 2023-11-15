// wap to extract last character of every word present in a sentance
#include <stdio.h>
#include <string.h>


void printLastChar(const char *str);

int main()
{
    char str[1000];
    printf("Enter a string: ");

    gets(str);
    // scanf("%[^\n]s", str);

    printLastChar(str);
    return 0;
}

void printLastChar(const char *str)
{
    int len = strlen(str);

    for (int i = 1; i < len; i++)
    {
        if (str[i] == ' ')
        {
            printf("%c ", str[i - 1]);
        }
    }
    printf("%c",str[len - 1]);
}
