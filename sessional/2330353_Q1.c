#include <stdio.h>
#include <string.h>
int main()
{
    int flag = 1;
    char str[100];

    printf("Enter the string:");
    scanf("%[^\n]s", str);

    int start = str[0];
    int length = strlen(str);
    int end = length - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            flag = 0;
        }
        start++;
        end--;
    }

    if (flag)
    {
        printf("String is palindrome");
    }
    else
    {
        printf("String is not palindrome");
    }
}
