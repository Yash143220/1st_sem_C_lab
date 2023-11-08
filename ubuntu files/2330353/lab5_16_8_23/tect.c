#include <stdio.h>
int main(){
  
    int num;
    int sum = 0;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num != 0){
        sum += num % 10;
        num = num/10;
    }
    printf("Digit sum: %d", sum);
}
