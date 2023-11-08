#include<stdio.h>

void main() {

int a, b,c,d, smaller;

printf("enter the value of  a:");
scanf("%d", &a);

printf("enter the value of  b:");
scanf("%d", &b);

printf("enter the value of  c:");
scanf("%d", &c);

d =  (a<b)? a:b;
smaller = (c<d)? c:d;

printf("Smaller number among a,b and c is %d\n",smaller );

}
