#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char arr[20];
    int x,i,r;
    printf("Enter Character values :\n");
    scanf("%s",&arr);
    x=strlen(arr);
    for(i=1;i<x;i++){
        if(arr[i]==arr[x-i+1]){
            r=1;
        }
        else{
            r=0;
        }
    }
    printf("%s",arr);
    return 0;
}
