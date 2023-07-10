#include<stdio.h>
int main(){
    float weight , height,BMI ;
    int age;
    char gender;
    printf("Enter your Age : \n");
    scanf("%d",&age);
    printf("Enter Your Gendr(if you male enter(m) , if you female enter(f)): \n");
    scanf(" %c",&gender);
    if((age>=20)&&(gender=='m')){
        printf("Enter your Weight(kg): \n");
        scanf("%f",&weight);
        printf("Enter your height(m):\n");
        scanf("%f",&height);
        BMI = weight/(height*height);
        printf("BMI = %.2f",BMI);
        if(BMI<18.5){
            printf("\nUnder Weight");
        }
        else if(BMI<25.0){
            printf("\nNormal");
        }
        else if(BMI<30.0){
            printf("\nOver weight");
        }
        else{
            printf("\nObese");
        }
    }

    return 0;
}