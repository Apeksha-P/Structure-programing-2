#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);

    if((year%4)!=0){
        printf("not a leap year");
    }
    else{
        if((year%100)!=0){
            printf("leap year");
        }
        else{
            if((year%400)!=0){
                printf("not a leap year");
            }
            else{
                printf("leap year");
            }
        }
    }
    return 0;
}