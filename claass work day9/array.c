/*Arrey is consist of homogenious elements or similar elements under a common name
 in contineous memory location in increasing order


Q1. How to create a array ?

array.type array.name [size];

int a[5];

*/

    #include <stdio.h>

    void main()
    {
        printf("Enter the size of array");
        int n, i, sum=0;
        scanf("%d", &n);
        int a[n];

        for (i = 0; i < n; i++)
        {
            printf("Enter value for %d\n",i);
            scanf("%d",&a[i]);
        }
        for (i = 0; i < n; i++)
        
            sum += a[i];
            printf("sum = %d\n", sum);
        
        
    }