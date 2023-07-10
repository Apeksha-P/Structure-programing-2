#include<stdio.h>
int main(){
    int radius;
    float area;
    const float pi = 3.14;
    printf("Enter radius of the circle:\n");
    scanf("%d",&radius);
    area = pi*radius*radius;
    printf("Area = %.2f",area);
    return 0 ;
}