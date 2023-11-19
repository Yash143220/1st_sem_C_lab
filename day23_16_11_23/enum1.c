#include<stdio.h>

enum days{Mon,Tues, Wed,thrus,Fri,Sat,Sun};

int main(){
    enum days start , end;
    start = Tues;

    end = Sat;

    printf("\n start = %d, End = %d", start, end);

    start = 64;

    printf("\n Start now is equal to %d", start);

    return 0;
}