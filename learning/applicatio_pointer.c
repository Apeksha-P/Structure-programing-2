#include<stdio.h>
void sum(int a, int b){
    printf("%d",a+b);
}
void sub(int a, int b){
    printf("%d",a-b);
}
void mult(int a, int b){
    printf("%d",a*b);
}
void div(int a,int b){
    printf("%d",a/b);
}
int main(){
    int ch,a,b;
    void (* fptr[10])(int,int)={sum,sub,mult,div};
    printf("Enter choice: ");
    scanf("%d",&ch);
    printf("Enter a & b: ");
    scanf("%d %d",&a,&b);
    (*fptr[ch])(a,b);
    return 0;
}
