// WAP to count the total number of characters in the file test.txt
#include <stdio.h>

int main()
{

    FILE *fp;
    char ch;
    int noc = 0;
    fp = fopen("test.txt", "r");
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        noc++;
    }

    fclose(fp);
    printf("\n Number of characters = %d", noc);
    return 0;
}