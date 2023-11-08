// wap to find vowel and consonant in a string using pointer

#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];
    char *ptr;

    int i, len, vowel = 0, consonants = 0;

    printf("Enter a string:");
    gets(str);

    ptr = str;

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (*(ptr + i) == 'a' || *(ptr + i) == 'e' || *(ptr + i) == 'i' || *(ptr + i) == 'o' || *(ptr + i) == 'u' || *(ptr + i) == 'A' || *(ptr + i) == 'E' || *(ptr + i) == 'I' || *(ptr + i) == 'O' || *(ptr + i) == 'O')
        {
            vowel++;
        }

        else
        {
            consonants++;
        }
    }

    printf("Number of Vowel in the string are: %d\n", vowel);
    
    printf("Number of Consonants in the string are: %d\n", consonants);

    return 0;
}