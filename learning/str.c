#include<stdio.h>
void modify(char [],char []);
int main(){
    char str1[]="pavithri";
    char str2[]="Apeksha";
    modify(str1,str2);
    return 0;
}
void modify(char str1[],char str2[]){
    int i,length=0;
    for(i=0;str1[i]!='\0';i++)
        length = length + 1;
    printf("length of first string %d",length);
    str2[0]='a';
    printf("\n%s %s",str1,str2);
}
