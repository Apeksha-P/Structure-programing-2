#include<stdio.h>
#include <string.h>
#include <stdlib.h>
//Create function
int concat(int x,int y){
    char str1[20],str2[20],str3[20];

    sprintf(str1,"%d",x);
    sprintf(str2,"%d",y);
    sprintf(str3,"%d",x);
    strcat(str1,str2); 
    strcat(str2,str3);

    //return largest concat number
    if(atoi(str1)>atoi(str2))
        return atoi(str1);
    else
        return atoi(str2);
}
int main(){
    int x,a,b,i;
    //input how many numbers enter
    //input first number
    scanf("%d %d",&x,&a);
    for(i=1;i<x;i++){
        //input another numbers
        scanf("%d",&b);
        //concat numbers
        a=concat(a,b);
    }

    //print largest concat number
    printf("%d",a);

    return 0;
}
