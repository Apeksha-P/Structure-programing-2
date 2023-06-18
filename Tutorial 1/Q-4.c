// Write a C program that will print the multiplication table of a number.

#include <stdio.h>
int mul(int a){
    for(int i=1;i<=12;i++){
        printf("%d x %d = %d\n",a,i,a*i);
    }
}

int main() {
    int x;
    printf("n Multiplication table: \n");
    scanf("%d",&x);
    printf("\n");
    mul(x);
    return 0;
}