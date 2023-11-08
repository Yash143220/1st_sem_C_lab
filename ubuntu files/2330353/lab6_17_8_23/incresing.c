#include<stdio.h>
void main()
{
int num1,num2,num3, high, mid, low;
printf("Enter a three number: ");

scanf("%d%d%d", &num1,&num2,&num3);

if (num1>num2) {
     mid = num1;
     low = num2;
} else {
      mid = num2;
      low = num1;

} if (mid > num3) {
      high = mid;

      if(low > num3){
         mid = low;
         low = num3;
} else {
       mid = num3;
      }
   } else high = num3;

printf("The num in ascending order is %d < %d < %d\n", low,mid,high);
}
