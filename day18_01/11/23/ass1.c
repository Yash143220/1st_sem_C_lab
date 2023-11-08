//wap to multiply 2 number using pointer

#include<stdio.h>

int main()
{
    int a,b;
    int *p1,*p2;
    int mul;
    
    printf("Enter 2 numbers : ");
    scanf("%d%d",&a,&b);
    
    p1 = &a;
    p2 = &b;
    
    mul = (*p1) * (*p2);
    
    printf("Multiplication of %d and %d is %d",*p1,*p2,mul);
    
    return 0;
}