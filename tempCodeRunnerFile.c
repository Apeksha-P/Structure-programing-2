#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    scanf("%[^\n]",str);
    int count=1;
    int x = strlen(str);
    for(int i =0;i<x;i++){
        if(str[i]==' '){
            count=count+1;
        }
    }
    printf("%d",count);
    /*while(str[i]!=' ')*/
    return 0;
}