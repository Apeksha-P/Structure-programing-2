#include <stdio.h>
int func(int *num2,int *num1){
    printf("\nSwap two numbers");            //Swap two numbers
    printf("\nFirst number: %d",*num1);      //First number: 8
    printf("\nSecond number: %d",*num2);     //Second number: 10
}
int main() {
    int num1 , num2;
    printf("Enter first number: ");        //Enter first number: 10
    scanf("%d",&num1);
    printf("Enter second number: ");      //Enter second number: 8
    scanf("%d",&num2);
    func(&num1,&num2);
}
