#include<stdio.h>

void main(){
    int num0,num1,num2,num3,num4,num5,num6,num7,num8,num9, sum,avg;

    printf("Enter 10 numbers:");
    scanf("%d%d%d%d%d%d%d%d%d%d",&num0,&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9);

    sum = num0+num1+num2+num3+num4+num5+num6+num7+num8+num9;
    avg = sum/10;

    printf("The sum and avg  of the given 10 number is %d and %d\n",sum,avg);

}