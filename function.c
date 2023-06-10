#include<stdio.h>

//with parameters with return type
int sum(int a,int b){
    return a+b;
}

//with parameters no return type
void sub(int a,int b){
    printf("Subtraction = %d\n",a-b);
}

//no parameters with return type
int mul(){
    int  c=10;
    int d =20;
    return c*d;
}
//no parameters no return type
void div(){
    int x=20;
    int y=2;
    int z = x/y;
    printf("Division = %d",z);
}

int main(){
    
    int add=sum(10,30);
    printf("Sum is : %d\n",add);
    
    sub(30,10);
    
    printf("Multiplication = %d\n",mul());
    
    div();
    
    return 0;
}