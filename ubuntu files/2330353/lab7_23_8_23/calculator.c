#include <stdio.h>

void main()
{
    int option;
    float num1, num2;

    printf("Enter the two int value:");
    scanf("%f%f", &num1, &num2);

    printf("Choose the option from the given menu\n");
    printf("1.Addition\t\t2.Substraction\n3.Multiplication\t4.Division\n\n");
    scanf("%d", &option);


    switch (option)
    {
    case 1:
        printf("\nResult after addition is: %.2f\n", num1 + num2);
        break;
    case 2:
        printf("Result after substraction is: %.2f\n", num1 - num2);
        break;
    case 3:
        printf("Result after multiplication is: %.2f\n", num1 * num2);
        break;
    case 4:
        num2 != 0 ? printf("Result after division is: %.2f\n", num1 / num2) : printf("Number cannot divide by zero.");
        break;

    default:
        printf("Invalaid Input!\n");
        break;
    }
}
