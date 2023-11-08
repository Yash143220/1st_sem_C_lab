
// TYPE 4 Function having  arguments and  having return too.
/*
#include <stdio.h>

int sum(int, int);

main()
{
    int a, b;
    printf("Enter the two number:\n");
    scanf("%d%d", &a, &b);

    printf("Sum = %d\n", sum(a, b));
}

int sum(int x, int y)
{
    return (x + y);
}
*/

// TYPE 3 Function having  arguments and  no return type.
/*
#include <stdio.h>

void sum(int, int);

main()
{
    int a, b;
    printf("Enter the two number:\n");
    scanf("%d%d", &a, &b);

    sum(a, b);
}

void sum(int x, int y)
{
    printf("Sum = %d\n", x + y);
}

*/

// TYPE 2 Function having no arguments and but having return type.

/*
#include <stdio.h>

int sum();

void main()
{
    printf("Sum = %d\n", sum());
}

int sum()
{
    int a, b;
    printf("Enter the two number:\n");
    scanf("%d%d", &a, &b);
    return (a + b);
}

*/

// TYPE 1 Function having no arguments and  having no return type.
/*
#include <stdio.h>

void sum( );

main()
{
  sum();
}

void sum()
{
    int a, b;
    printf("Enter the two number:\n");
    scanf("%d%d", &a, &b);

    printf("Sum = %d\n", a + b);
}

*/


