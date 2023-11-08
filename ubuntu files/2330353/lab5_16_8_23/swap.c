#include<stdio.h>

void main() {
 
int a, b, temp;

printf("enter the value of  a:");
scanf("%d", &a);

printf("enter the value of  b:");
scanf("%d", &b);

printf("value of a and b before swap is %d and %d\n", a,b);
 
temp = a;
a = b;
b = temp;

printf("value of a and b after swap is %d and %d\n",a,b );

}
