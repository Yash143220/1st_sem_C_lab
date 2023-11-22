#include <stdio.h>
#define file1 "sourse.txt"
#define file2 "dest.txt"
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen(file1, "r");
    fp2 = fopen(file2, "w");
    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
}