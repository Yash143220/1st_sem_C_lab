 
#include<stdio.h>
void main()
{
int num1,num2,num3;
printf("Enter a three number: ");

scanf("%d%d%d", &num1,&num2,&num3);

if (num1>num2 && num1>num3){
printf("num1 is greater that is %d",num1);
}

if (num2>num1 && num2>num3){
printf("num2 is greater that is %d",num2);
}

if (num3>num1 && num3>num2){
printf("num3 is greater that is %d",num3);
}

}
