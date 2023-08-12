#include<stdio.h>
int fun1(int a){
    if(a<=1)
        return 1;
    else
        return a*(fun2(a-1));
}
int fun2(int a){
    if(a<=1)
        return 1;
    else 
        return a*fun1(a-1);
}
int main(){
    int n;
    printf("n! Enter value to n:  ");
    scanf("%d",&n);
    printf("%d",fun1(n));
    return 0;
}
