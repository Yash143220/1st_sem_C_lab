// wap which will ask to enter a name, then print the name like Rohit Kumar Singh = R K Singh

#include <stdio.h>
#include <string.h>

void main()
{
    int a, b;
    char name[100];
    printf("Enter your name: ");
    gets(name);

    printf("%c.", name[0]);
    for (int i = 1; i < strlen(name); i++)
    {

        if (name[i] == ' ')
        {
            a = i;
        }
    }
    for (int i = 1; i < strlen(name); i++)
    {
        if (i != a)
        {
            if (name[i] == ' ')
            {
                printf("%c.", name[i + 1]);
            }
        }
    }
        for (int j = a + 1; j < strlen(name); j++)
        {
            printf("%c", name[j]);
        }
    }