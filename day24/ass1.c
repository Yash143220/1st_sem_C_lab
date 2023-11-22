//WAP to read and print the content of a file test.txt


#include <stdio.h>

int main(){

    FILE *fp;
    char ch;
    fp = fopen("test.txt", "r");
    printf("The content of the file is: \n");
    while(1)
    {
        char ch = fgetc(fp);
        if(ch == EOF)
            break;
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}