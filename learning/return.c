#include<stdio.h>
char* display(){
    static char str[]="apeksha";
    return str;
}
int main(){
    char* str;
    str = display();
    printf("%s\n",str);
    str[1]='z';
    printf("%s",str);
    return 0;
}
