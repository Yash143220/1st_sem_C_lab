//extract sub-string from a given string 

#include <stdio.h>
int sub_string(char *str, int start, int len)
{
    printf("The sub-string is: ");
    for (int i = start; i < start + len; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}
int main()
{
    char str[100];
    int start, len;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the starting index: ");
    scanf("%d", &start);

    printf("Enter the length of the sub-string: ");
    scanf("%d", &len);
    sub_string(str, start, len);
    return 0;
}