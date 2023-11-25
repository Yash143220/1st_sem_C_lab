// WAP to count the total number of words in the file test.txt

#include <stdio.h>

int main()
{

    FILE *fp;
    char ch;
    int now = 0, noc = 0;
    fp = fopen("test.txt", "r");
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        noc++;
        if (ch == ' ')
            now++;
    }

    fclose(fp);
    printf("\n Number of characters = %d", noc);
    printf("\n Number of words = %d", now + 1);
    return 0;
}