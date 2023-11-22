//give atleast one example of each storage class

#include<stdio.h>


extern int extVar;
int extVar = 5;

void function() {
    auto int autoVar = 10;

    static int staticVar = 15;

    register int registerVar = 20;

    printf("Automatic variable: %d\n", autoVar);
    printf("Static variable: %d\n", staticVar);
    printf("Register variable: %d\n", registerVar);
}

int main() {
    printf("External variable: %d\n", extVar);
    function();
    return 0;
}
