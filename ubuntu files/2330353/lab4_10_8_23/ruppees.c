//WAP to calculate ruppees we have after getting the following information 
 /*
10 - 2
20 - 3 
50 -  0 
100 -  5
500 -  6 
1000 - 0 

*/
#include<stdio.h>

void main(){

int r1,r2,r3,r4,r5,r6, totalnote;
printf("Enter the number of 10₹ note: ");
scanf("%d", &r1);
printf("Enter the number of 20₹ note: ");
scanf("%d", &r2);
printf("Enter the number of 50₹ note: ");
scanf("%d", &r3);
printf("Enter the number of 100₹ note: ");
scanf("%d", &r4);
printf("Enter the number of 500₹ note: ");
scanf("%d", &r5);
printf("Enter the number of 1000₹ note: ");
scanf("%d", &r6);

totalnote = r1*10+r2*20+r3*50+r4*100+r5*500+r6*1000;

printf("The total ammount of cash is %d\n", totalnote);

}





