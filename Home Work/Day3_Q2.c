#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    scanf("%[^\n]",str);
    int count=1;
    int x = strlen(str);
    for(int i =0;i<x;i++){
        if(str[i]==' '){
            if((str[i+1]!=' ')&&(str[i+1]!='\0'))
                count=count+1;
        }
    }
    printf("%d",count);
    return 0;
}