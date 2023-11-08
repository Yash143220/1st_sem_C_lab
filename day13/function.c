/*
Function is a block of code having a particular task.

How to define a function?
Syntax:-  return_type function_name (list of parameter)

{
    body of function
}
*/

// addtion of two int no.

#include <stdio.h>

// int sum(int x, int y)
// {
//     return x + y;
// }
int sum(int,int); // function prototype 
void mul(int x, int y)
{
    printf("Multiplication of the int is %d\n", x * y);
}
void main()
{
    int a, b;
    printf("Enter the two number:\n");
    scanf("%d%d", &a, &b);

    printf("Sum = %d\n", sum(a, b));
    mul(a,b);
}

int sum(int x, int y)
{
    return x + y;
}

/*
Q.What is the need of function protype?

function prototype informs the compiler about the 
function name , 
function return type and 
number of arguments with its type.


# Based on function argument and function return type 
four types of functions are exist


#1  Function having no arguments and  having no return type.

#2  Function having no arguments and but having return type.

#3  Function having  arguments and  no return type.

#4  Function having no arguments and  having return too.
*/

