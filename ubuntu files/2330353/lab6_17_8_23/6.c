#include <stdio.h>
void main()
{

    char ch;
    printf("Enter a Character: ");
    scanf("%c", &ch);

    char grade = ch;
    switch (grade)
    {

    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("Your charcter %c is a Vowel.\n", ch);
        break;
    default:
        printf("The character %c is a Consonant\n", ch);
    }

}
