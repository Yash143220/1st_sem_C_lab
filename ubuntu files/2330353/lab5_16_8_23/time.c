#include<stdio.h>

void main() {

int s,m,h,time;

printf("enter the time in second: ");
scanf("%d", &s);
h = s/3600;
s = s%3600;
m = s/60;
s =  s%60;

printf("the time is %d:%d:%d\n",h,m,s );

}
