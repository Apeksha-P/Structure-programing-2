#include <stdio.h>
int length(char * str){
    int len = 0;
    while (str[len]!='\0'){
        len++;
    }
    return len;
}
int main() {
    char  ch[]={"Apeksha"};
    int x = length(ch);
    printf("%d",x);
    return 0;
}
