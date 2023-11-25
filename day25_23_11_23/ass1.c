//wap in c to read a data from a text file where the file is taken from cmd lind argument

#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char *filename;
    char ch;

    if (argc < 2)
    {
        printf("Missing filename\n");
        return (1);
    }
    else
    {
        filename = argv[1];
        printf("Filename is %s\n", filename);
    }
    fp = fopen(filename, "r");

    if (fp)
    {
        printf("File opened successfully\n");
        while ((ch = fgetc(fp)) != EOF)
        {
            printf("%c", ch);
        }
    }
    else
    {
        printf("Failed to open the file\n");
    }
    return 0;
}
