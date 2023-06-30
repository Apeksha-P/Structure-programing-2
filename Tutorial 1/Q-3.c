// Obtain three numbers from the user and print the largest number.

#include <stdio.h>

int main() {
    int a,b,c;

    printf("Enter three numbers: \n");
    scanf("%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("Max = %d",a);
        }
        else{
            printf("Max = %d",c);
        }
    }
    else{
        if(b>c){
            printf("Max = %d",b);
        }
        else{
            printf("Max = %d",c);
        }
    }
    return 0;
}