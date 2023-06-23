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
        rev[i] = arr[x-i-1];
    }
    value = strcmp(arr, rev);  
    if(value == 0)  
        printf("strings are Palindrome");  
    else  
        printf("strings are not Palindrome");
    return 0;
}
