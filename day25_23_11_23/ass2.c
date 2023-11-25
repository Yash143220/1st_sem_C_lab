//wap in c to calculate the area of a circle using macro where pi and area is defined as user defined macro
#include <stdio.h>
#define pi 3.14
#define Area(r) (pi * (r * r))

void main()
{
    float radius = 2.5;

    float area = Area(radius);

    printf("Area of the circle is %f\n", area);

    int radiusInt = 5;

    printf("Area of the circle is %f", Area(radiusInt));
}