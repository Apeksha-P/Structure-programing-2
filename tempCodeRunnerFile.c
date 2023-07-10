#include<stdio.h>
int main(){
    int select;
    float usd ,lkr,amount ; 
    printf("Please select the convertion type : \n");
    scanf("%d",&select);
    if(select == 1){
        printf("Enter the amount (USD):\n");
        scanf("%f",&usd);
        amount = usd * 307.73;
        printf("%.2f USD is %.2fLKR",usd,amount);
    }
    else if(select==2){
        printf("Enter the amount (LKR):\n");
        scanf("%f",&lkr);
        amount = lkr/307.73;
        printf("%.2f LKR is %.2fLKR",lkr,amount);
    }
    return 0;
}