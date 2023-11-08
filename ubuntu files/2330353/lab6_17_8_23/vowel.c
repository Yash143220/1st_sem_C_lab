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
        printf("Your charcter %c is a Vowel.\n", ch);
        break;
    case 'E':
    case 'e':
        printf("Your charcter %c is a Vowel.\n", ch);
        break;
    case 'I':
    case 'i':
        printf("Your charcter %c is a Vowel.\n", ch);
        break;
    case 'O':
    case 'o':
        printf("Your charcter %c is a Vowel.\n", ch);
        break;
    case 'U':
    case 'u':
        printf("Your charcter %c is a Vowel.\n", ch);
        break;
    default:
        printf("The character %c is a Consonant\n", ch);
    }

}
