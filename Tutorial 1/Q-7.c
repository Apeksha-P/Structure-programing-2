#include<stdio.h>
int main(){
    int a,b;
    char c;
    printf("Enter number 1:\n");
    scanf("%d",&a);
    printf("Enter operater:\n");
    scanf(" %c",&c);
    printf("Enter number 2:\n");
    scanf("%d",&b);
    switch (c){
        case '+':
            printf("\n%d %c %d = %d",a,c,b,a+b);
            break;
        case '-':
            printf("\n%d %c %d = %d",a,c,b,a-b);
            break;
        case '*':
            printf("\n%d %c %d = %d",a,c,b,a*b);
            break; 
        case '/':
            printf("\n%d %c %d = %d",a,c,b,a/b);
            break;
        case '%':
            printf("\n%d %c %d = %d",a,c,b,a%b);
            break; 
    }
    return 0;
}