#include<stdio.h>
void display(int n){
    if(n<1)
        return;
    else{
        printf("%d",n);
        display(n-1);
        printf("%d",n);
    }
}
void main(){
    int n;
    printf("Enter value to n: ");
    scanf("%d",&n);
    display(n);
}
