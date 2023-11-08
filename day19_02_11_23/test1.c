// check  if a triangle is possible or not if possible find its area

#include <stdio.h>
#include <math.h>

void main()
{

    int a, b, c;

    printf("Enter the length of the sides of the triangle:");
    scanf("%d%d%d", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b)
    {
        printf("The triangle is possible\n");
        float s = (a + b + c) / 2;

        float area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("The area of the triangle is %f\n", area);
    }
    else
    {
        printf("The triangle is not possible\n");
    }
}