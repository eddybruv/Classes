#include<stdio.h>

int main(void){
    int a, b;
    printf("Enter two numbers to be summed: ");
    scanf("%d %d", &a, &b);
    printf("Sum of %d and %d is %d.",a ,b, a+b);
    return 0;
}