//wap to swap 2 number using call by reference function (print value - before swap , during swap , after swap)

#include<stdio.h>

void swap(int *p1,int *p2)
{
    int temp;
    
    printf("Before swap : %d %d\n",*p1,*p2);
    
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
    printf("During swap : %d %d\n",*p1,*p2);
}

int main()
{
    int a,b;
    int *p1,*p2;
    
    printf("Enter 2 numbers : ");
    scanf("%d%d",&a,&b);
    
    p1 = &a;
    p2 = &b;
    
    swap(p1,p2);
    
    printf("After swap : %d %d\n",*p1,*p2);
    
    return 0;
}