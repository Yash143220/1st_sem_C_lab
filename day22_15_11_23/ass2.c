//Write a program to add two times.(hh:mm:ss)

#include<stdio.h>

struct Time
{
    int h;
    int m;
    int s;
} t1, t2, sum;

int main()
{

    printf("Enter time  1 (hh:mm:ss): ");
    scanf("%d %d %d", &t1.h, &t1.m, &t1.s);

    printf("Enter time 2 (hh:mm:ss): ");
    scanf("%d %d %d", &t2.h, &t2.m, &t2.s);

    sum.h = t1.h + t2.h;
    sum.m = t1.m + t2.m;
    sum.s = t1.s + t2.s;

    if (sum.s >= 60)
    {
        sum.m += sum.s / 60;
        sum.s %= 60;
    }
    if (sum.m >= 60)
    {
        sum.h += sum.m / 60;
        sum.m %= 60;
    }

    printf("\nSum of 2 Times is : %d:%d:%d\n", sum.h, sum.m, sum.s);

    return 0;
}