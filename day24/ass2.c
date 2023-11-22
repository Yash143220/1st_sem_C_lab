//WAP to append the phrase with strong a interdisciplinary culture and a commitment to teaching excellence into the file test.txt

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch[1000];
    printf("Enter the phrase: ");
    scanf("%[^\n]s", &ch);

    fp = fopen("test.txt", "a");

    fprintf(fp, "%s", ch);
    fclose(fp);
    return 0;
}
