// wap to find number of words present , no. of character (length),no. vowels and no of consonants present in a string

#include <stdio.h>
int func();
int main()
{
    func();
}

int func()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int i = 0, count = 0, vowels = 0, consonants = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            count++;
        }
        else if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                 str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
                 str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
                 str[i] == 'U')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
        i++;
    }

    printf("Number of words: %d\n", count + 1);
    printf("Number of characters: %d\n", i);
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
}