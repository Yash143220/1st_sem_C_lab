/*wap to print atleast 5 names using dynamic memory allocation*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int n;

    printf("Enter the number of names you want to enter: ");
    scanf("%d", &n);

    char *name[n];
    int i;
    for (i = 0; i < n; i++)
    {
        name[i] = malloc(n * sizeof(char));
        if (name[i] == NULL)
        {
            fprintf(stderr, "Error - unable to allocate required memory\n");
        }
        else
        {
            printf("Enter name %d: ", i + 1);
            scanf("%s", name[i]);
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("Name %d: %s\n", i + 1, name[i]);
    }
    return 0;
}