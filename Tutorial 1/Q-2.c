// Write a program to calculate the sum of two numbers
#include <stdio.h>

int sum(int a,int b){
    printf("Sum = %d",a+b);
}
int main() {
    int x,y;
    printf("x= ");
    scanf("%d",&x);
    printf("y= ");
    scanf("%d",&y);
    
    sum(x,y);
}