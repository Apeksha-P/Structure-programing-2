#include<stdio.h>
int sales(int totalAmount){
    float collection = totalAmount;
    float totalTax,sales,countySales,stateSales;
    totalTax = collection * 9 / 109;
    sales = collection - totalTax;
    countySales = sales *0.05;
    stateSales = sales * 0.04;
    printf("Total Collections: $ %.2f",collection);
    printf("\nSales: $ %.2f",sales);
    printf("\nCounty Sales Tax: $ %.2f",countySales);
    printf("\nState Sales Tax: $ %.2f",stateSales);
    printf("\nTotal Sales Tax Collected: $ %.2f",totalTax);
}
int main(){
    int totalAmount;
    char month[20];
    printf("Enter total amount collected (-1 to quit): ");
    scanf("%d",&totalAmount);
    printf("Enter name of month: ");
    scanf(" %s",month);
    sales(totalAmount);
    return 0;
}
