#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[20];
    char *description;

    strcpy(str,"Kiit University");
    description = malloc(200* sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr,"Error - unable to allocate required memory\n");
    }
    else
    {
        strcpy(description,"Kiit University is in Bhubaneswar");
    }

    printf("Name = %s\n",str);
    printf("Description: %s\n",description);
}