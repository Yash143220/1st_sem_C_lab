/* WAP to add two integer and print the sum of the integer.*/

#include<stdio.h>

void main(){

printf("please enter the two int value\n");

int num1, num2, sum;

scanf("%d%d", &num1,&num2);
sum = num1+num2;
printf("sum of %d and %d is = %d\n",num1,num2,sum);
}
