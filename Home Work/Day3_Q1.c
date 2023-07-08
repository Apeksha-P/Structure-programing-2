#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    scanf(" %s",str);
    int x = strlen(str);
    for(int i=0;i<x;i++){
        printf("%c",str[x-1-i]);
    }
}