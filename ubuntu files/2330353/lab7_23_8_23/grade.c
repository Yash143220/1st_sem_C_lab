#include <stdio.h>

void main(){
int a;

printf("Enter the marks: ");
scanf("%d",&a);

if(a >= 90){
printf("Your grade is 'O'\n");
} else if (a>=80 && a <=89){
printf("Your grade is 'E'\n");
} else if (a>=70 && a<=79){
printf("Your grade is 'A'\n");
} else if(a>=60 && a<=69){
printf("Your grade is 'B'\n");
} else if (a>=50 && a<=59){
printf("Your grade is 'C'\n");
} else if (a>=40 && a<=49){
printf("Your grade is 'D'\n");
} else {
printf("Your grade is 'F'\n");
}
}
