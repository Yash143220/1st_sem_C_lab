#include <stdio.h>
#include <math.h>

void main() 
{
  float a, b, c;
  float dis, r1, r2;

  printf("Enter coefficients a, b, and c: ");
  scanf("%f %f %f", &a, &b, &c);
  dis = b * b - 4 * a * c;

  if (dis > 0)
  {
    r1 = (-b + sqrt(dis)) / (2 * a);
    r2 = (-b - sqrt(dis)) / (2 * a);
    printf("Root 1 = %.2f\n", r1);
    printf("Root 2 = %.2f\n", r2);
  }
  else if (dis == 0)
  {

    r1 = -b / (2 * a);
    printf("Root = %.2f\n", r1);
  }
  else
  {

    float realPart = -b / (2 * a);
    float imaginaryPart = sqrt(-dis) / (2 * a);
    printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
    printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
  }
}