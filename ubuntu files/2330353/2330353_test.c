/*Q. wap which will ask to enter required data to check two circles are 

 option a .  intersecting
option b . concentric
optiob c. far away from each other
*/


#include<stdio.h>

void main()
{
int r1,r2,x1,y1,x2,y2;

printf("Enter the radius, x-coordinate and y- coordinate of the first circle\n");
scanf("%d%d%d",&r1,&x1,&y1);
printf("Enter the radius, x-coordinate and y- coordinate of the second circle\n");
scanf("%d%d%d",&r2,&x2,&y2);

   if(x1 == x2 && y1 == y2){
     printf("The circle is concentric\n");

    } else if(r1==r2 && x1>x2+r2 && y1>y2+r2){
     printf("The circle is far away");
    } else
          printf("the circle is intersecting\n");


}
