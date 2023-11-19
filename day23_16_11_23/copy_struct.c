#include<stdio.h>

struct student
{
    char name[20];
    int roll;
    int xxx;
};

int main()
{
    struct student s1 = {"rahul", "2478284", '24'};
    struct student s2;
    s2 = s1;
    printf("%d", sizeof(s1));

    return 0;
}
