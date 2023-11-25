//wap in c to find out sum of 2 integers using  command line arguments

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int add;

    if (argc < 3)
    {
        printf("Missing Arguments\n");
        return (1);
    }
    else
    {
        add = atoi(argv[1]) + atoi(argv[2]); //atoi converts string to integer (ascii to integer)
    }

    printf("The sum is %d\n", add);
}