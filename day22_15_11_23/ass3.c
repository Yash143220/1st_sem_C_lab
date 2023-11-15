// use structure to perform addition, subtraction, multiplication and division on two complex numbers.

#include <stdio.h>

struct Complex
{
    int real;
    int imaginary;
} c1, c2, sum, diff, prod, quot;

int main()
{

    printf("Enter complex number 1 (real imaginary): ");
    scanf("%d %d", &c1.real, &c1.imaginary);

    printf("Enter complex number 2 (real imaginary): ");
    scanf("%d %d", &c2.real, &c2.imaginary);

    sum.real = c1.real + c2.real;
    sum.imaginary = c1.imaginary + c2.imaginary;

    diff.real = c1.real - c2.real;
    diff.imaginary = c1.imaginary - c2.imaginary;

    prod.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    prod.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;

    quot.real = (c1.real * c2.real + c1.imaginary * c2.imaginary) / (c2.real * c2.real + c2.imaginary * c2.imaginary);
    quot.imaginary = (c1.imaginary * c2.real - c1.real * c2.imaginary) / (c2.real * c2.real + c2.imaginary * c2.imaginary);

    printf("\nSum of complex numbers: %d + %di\n", sum.real, sum.imaginary);
    printf("Difference of complex numbers: %d + %di\n", diff.real, diff.imaginary);
    printf("Product of complex numbers: %d + %di\n", prod.real, prod.imaginary);
    printf("Quotient of complex numbers: %d + %di\n", quot.real, quot.imaginary);

    return 0;
}