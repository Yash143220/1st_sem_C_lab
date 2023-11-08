// WAP to find sum of digit of a number (int) using fucntion

// #include <stdio.h>

// int digit();

// void main()
// {
//     printf("The sum of digits of a number is %d\n", digit());
// }

// int digit()
// {
   // check a number is prime or not using user defined function

#include <stdio.h>
#include <math.h>
void prime(int); // function prototype
void main()      // calling function
{
    int n;

    printf("Enter a number to check:\n");
    scanf("%d", &n);
    prime(n); // actual argument
}

void prime(int x)
{
    int count = 0, i;
    for (i = 1; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            count++;
        }
    }
    if (count > 1)
        printf("Enter no. is %d is not a prime no.\n", x);

    else

        printf("Enter no. %d is a prime no.\n", x);
}
