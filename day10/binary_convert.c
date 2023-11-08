// WAP to  find binary equvalant of a decimal no.
#include <stdio.h>
void main()
{

   int n, i, k = 0;
   printf("Enter the number:");
   scanf("%d", &n);
   int a[n];
   for (i = 0; n > 0; i++)
   {
      a[i] = n % 2;
      n /= 2;
      k++;
   }
   printf("Binary code is \t");
   for (i = k - 1; i >= 0; i--)
   {
      printf("%d", a[i]);
   }
}