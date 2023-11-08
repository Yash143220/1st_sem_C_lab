#include <stdio.h>

void main()
{
    char str[50];
    printf("Enter a string: ");

    // option1:

    // scanf("%[^\n]s",str);
    // // scanf("%s",str);
    // printf("You entered is: %s",str);

    // option2:

    gets(str);
    puts(str);
}