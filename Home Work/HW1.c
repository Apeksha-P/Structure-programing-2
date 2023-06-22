#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char arr[20];

    int x,i;
    int r=0;
    printf("Enter Character values :\n");
    scanf("%s",&arr);
    x=strlen(arr);
    char rev[x];
    int value;
    for(i=0;i<x;i++){
        rev[i] = arr[x-i+1];
        /*if(arr[i]==arr[x-i+1]){
            r=1;
        }
        else{
            r=0;
        }*/
    }
    
    /*for(i=0;i<x;i++){
        if(arr[i]==rev[i]){
            r += 1;
        }
        else{
            printf("no");
            break;
        }
    }*/
    value = strcmp(arr, rev);  
    if(value == 0)  
        printf("strings are same");  
    else  
        printf("strings are not same");
    /*if(rev==arr){
        printf("yes");
    }
    else{
        printf("no");
    }*/
    /*printf("%s",rev);
    printf("%s",arr);*/
    return 0;
}
