#include<stdio.h>

void main() {

int a, b, greater;

printf("enter the value of  a:");
scanf("%d", &a);

printf("enter the value of  b:");
scanf("%d", &b);

greater =  (a>b)? a:b;

printf("greater number among a and b is %d\n",greater );

}
