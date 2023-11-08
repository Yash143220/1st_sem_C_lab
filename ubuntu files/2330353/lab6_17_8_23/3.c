#include<stdio.h>
int main()
{
char grade = 'b';
switch(grade)
{

case 'A':
     printf("Excellent\n");
     break;
case 'B':
    break;
case 'C':
    printf("Well done\n");
     break;
case 'D':
    printf("You passed\n");
    break;
case 'F':
     printf("Better Try again\n");
     break;
 default: printf("invalid grade\n");

}
printf("Your grade is %c\n",grade);
return 0;
}
