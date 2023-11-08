#include<stdio.h>
void main()
{
int num, sum = 0;
printf("Enter a five-digit integer: ");
scanf("%d", &num);
sum += num / 10000;
num %= 10000;
sum += num / 1000;
num %= 1000;
sum += num / 100;
num %= 100;
sum += num / 10;
num %= 10;
sum += num;
printf("Sum of digits: %d\n",sum);
}
