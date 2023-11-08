#include <stdio.h>

void main()
{
    int n, reverse = 0, num;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;
    while (num != 0)
    {
        int r = num % 10;
        reverse = reverse * 10 + r;
        num = num / 10;
    }
    if (n == reverse)
    
        printf("Given number %d is a palindrome\n", n);
    

    else
        printf("Given number %d is not a palindrome\n", n);
}
