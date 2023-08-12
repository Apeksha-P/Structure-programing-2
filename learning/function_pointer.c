#include <stdio.h>
int sum(int,int);
int main(){
    int s=0;
    int (*ptr)(int,int)=&sum;
    s = (*ptr)(2,5);
    printf("%d",s);
    return 0;
}
int sum(int a,int b){
    return a+b;
}
