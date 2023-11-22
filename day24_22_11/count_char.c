#include <stdio.h>

int main(){

    FILE *fp;
    char ch;
    int nol = 0, not = 0,nob = 0, noc = 0; 
    fp = fopen("dest.txt", "r");
    while(1)
    {
        ch = fgetc(fp);
        if(ch == EOF)
            break;
            noc ++;
            if(ch == ' ')
                nob++;
                if(ch == '\n')
                    nol++;
                    if(ch == '\t')
                        not++;
                        }

    fclose(fp);
    printf("\n Number of characters = %d", noc);
    printf("\n Number of blanks = %d", nob);
    printf("\n Number of tabs = %d", not);
    printf("\n Number of lines = %d", nol);
    return 0;
}