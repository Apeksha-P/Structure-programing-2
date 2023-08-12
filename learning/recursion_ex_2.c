#include<stdio.h>
int sum(int x){
    int s=0;
    if(x==1)
        return x;
    s = x + sum(x-1);
    return s;
}
int main(){
    int a,n;
    printf("Sum of N natural numbers: ");
    scanf("%d",&n);
    a = sum(n);
    printf("%d",a);
}
