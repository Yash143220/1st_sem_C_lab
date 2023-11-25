//wap in c to illutrate some predefined indentifiers

#include <stdio.h>

int main()
{
    printf("Date is %s\n", __DATE__);        // it will return date of the program
    printf("File name is %s\n", __FILE__);   // it will return file name
    printf("Time is %s\n", __TIME__);        // it will return time of the program
    printf("Line number is %d\n", __LINE__); // it will return line number of the program
    printf("ANSI is %d\n", __STDC__);        // STDC is standard c compiler it will return 1 if it is standard c compiler
}