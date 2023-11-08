/*
WAP to calculate temp given in degree celcius to farenhite    c/5 = f-32/9
*/
#include<stdio.h>
void main(){

float c,far;

printf("Enter the temp in degree celcius:");
scanf("%f", &c);

far= (c*9/5)+32;

printf("The Temp %f C in degree Farenhite is %f\n", c, far);
}
