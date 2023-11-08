//write a program to calculate area of  rectangle and perimeter by providing length and breadth

#include<stdio.h>

void main(){
float l,b,area,perimeter;

printf("Enter the length and breadth of the rectangle:");
scanf("%f%f",&l,&b);
area= l*b;
perimeter= 2*l+2*b;

printf("Area of the %f and %f is = %f\n",l,b,area);
printf("Perimeter of %f an %f is = %f\n", l,b,perimeter);

}
