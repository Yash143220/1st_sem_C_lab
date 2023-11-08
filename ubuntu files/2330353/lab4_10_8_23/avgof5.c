/*WAP to calculate average of 5 integer*/

#include<stdio.h>

void main(){

printf("please enter the five int value\n");

int num1, num2,num3,num4,num5,sum, avg;

scanf("%d%d%d%d%d", &num1,&num2,&num3,&num4,&num5);
sum= num1+num2+num3+num4+num5;
avg= sum/5;
printf("Average  of %d, %d, %d, %d, %d is = %d\n",num1,num2,num3,num4,num5,avg);
}
