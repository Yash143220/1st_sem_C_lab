#include <stdio.h>

struct Staff
{
    char name[50];
    int Id;
    float height;
    int salary;
};

int main()
{
    struct Staff staff[4];
    int i, tall;

    for (i = 0; i < 4; i++)
    {
        printf("Enter the detail of staff %d\n", i+1);
        printf("Name: ");
        scanf(" %[^\n]s", staff[i].name);
        printf("Id: ");
        scanf("%d", &staff[i].Id);
        printf("Height: ");
        scanf("%f", &staff[i].height);
        printf("Salary: ");
        scanf("%d", &staff[i].salary);
    }
    tall = 0;
    for (i = 1; i < 4; i++)
    {
        if (staff[i].height > staff[tall].height)
        {
            tall = i;
        }
    }

    printf("Staff name %s and Id %d is the tallest\n", staff[tall].name, staff[tall].Id);
    return 0;
}