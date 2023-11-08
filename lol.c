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
        int n, i,k,l;
        scanf("%d", &n);
        int a[n];

        for (i = 0; i < n; i++)
        {
            printf("Enter value for %d\n",i);
            scanf("%d",&a[i]);
        }
        printf("Enter the element to be inserted :");
        scanf("%d",&k);
        printf("Enter the location:");
        scanf("%d",&l);
        
        int b[n+1];

        for (i = 0; i < n+1; i++)
        {
            if(i == l)
            {
                b[i] = k;
                continue;
            }
            b[i] = a[i];

        }

        for ( i = 0; i < n+1; i++)
        {
            printf
        }
        
        
    }