// check a number is present ina fibonacci series or not f0 = 2 and f1= 3 . 1000 series number

#include <stdio.h>
void fibo();
int main()
{
    fibo();
}
void fibo()
{
    int n, i, t1 = 2, t2 = 3, nextTerm;
    printf("Enter the number to search:");
    scanf("%d", &n);
    for (i = 1; i <= 1000; ++i)
    {
        if (n == t1)
        {
            printf("number found:%d", n);  
            return;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("number not found!");
}