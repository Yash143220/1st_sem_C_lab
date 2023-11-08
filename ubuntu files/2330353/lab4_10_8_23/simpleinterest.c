/*
WAP to calculate simple interest given  P R T
*/

#include<stdio.h>
void main(){
float p,r,t,si,fam;
printf("Enter the principal amount: ");
scanf("%f", &p);
printf("Enter the rate of interest: ");
scanf("%f", &r);
printf("Enter the time period: ");
scanf("%f", &t);
si= p*r*t/100;
fam= si+p;
printf("The Simple Interest of ammount %f after time %f with interest rate of %f is: %f\nAnd the total ammount is : %f\n",p,t,r,si,fam);
}
