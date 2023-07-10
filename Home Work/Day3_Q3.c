#include<stdio.h>
#include <string.h>
int main(){
    char arr[100];
    printf("Enter paragraph: \n");
    scanf("%[^\n]",arr);
    int length = strlen(arr);
    for(int i = 0;i<length;i++){
        if((arr[i]>96&&arr[i]<123)||(arr[i]>64&&arr[i]<91)){
            printf("%c",arr[i]);
        }
    }
}