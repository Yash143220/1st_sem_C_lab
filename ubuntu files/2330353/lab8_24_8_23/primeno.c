#include<stdio.h>
#include<math.h>
void main()
{

 int i , num  , count = 0;

  printf("please enter a number to check is prime or not:\n");
  scanf("%d",&num);
    for(i = 2; i< num; i++) 
    {
       if( num %i == 0)
        {
        count++;
        printf(" i value is %d\n",i);
        }

     }
     if(count>=1)
       printf("Enter no. is %d is not a prime no.\n",num);

       else

         printf("Enter no. %d is a prime no.\n",num);


}
