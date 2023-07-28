#include <stdio.h>
int maxi(int,int);
int main(){
    int a,b,max;
    scanf("%d %d",&a,&b);
    max = maxi(a,b);
    printf("%d",max);
    return 0;
}
int maxi(int x,int y){
    return x>y?x:y;
}
