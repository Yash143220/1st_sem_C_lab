#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c,d;
    float s,area;
    printf("Enter three sides of triangle:");
    scanf("%d%d%d", &a,&b,&c);
if(a+b<=c || a+c<=b || b+c <= a){
printf("The triangle is possible\n");
 s = (a + b + c) / 2;
 area = sqrt(s * (s - a) * (s - b) * (s - c));
printf("area of triangle is %f",area);
} else {
printf("Area is not possible\n");

}

}

