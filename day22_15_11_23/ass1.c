// WAP to add two distance (having km and m) using struct
#include <stdio.h>

struct Distance
{
    int km;
    int m;
} d1, d2, sum;

int main()
{

    printf("Enter distance 1 (km m): ");
    scanf("%d %d", &d1.km, &d1.m);

    printf("Enter distance 2 (km m): ");
    scanf("%d %d", &d2.km, &d2.m);

    sum.km = d1.km + d2.km;
    sum.m = d1.m + d2.m;

    if (sum.m >= 1000)
    {
        sum.km += sum.m / 1000;
        sum.m %= 1000;
    }

    printf("\nSum of distances: %d km %d m\n", sum.km, sum.m);

    return 0;
}