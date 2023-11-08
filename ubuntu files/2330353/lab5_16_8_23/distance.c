#include<stdio.h>

void main() {

int a,b,x,c,d,feet;

printf("enter the first  distance in feet and in inches: ");
scanf("%d%d", &a,&b);

printf("enter the second distance in feet and in inches: ");
scanf("%d%d", &c,&d);

x = b+d;
feet = a+c + (x/12);
x = x % 12;


printf("Final distance is %d feet and %d inches\n",feet,x);

}
