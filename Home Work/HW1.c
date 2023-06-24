#include<stdio.h>
#include <string.h>
#include <stdlib.h>


int reverse(int x,char arr[20]){
    char rev[x];
    int value;
    //Create reverse of the char array
    for(int i=0;i<x;i++){
        rev[i] = arr[x-i-1];
    }
    value = strcmp(arr, rev);
    return value;
}

int palindrome(int x,char arr[20]){
    int i,j,count1=0,count2=0;
    //Count how many characters add to end 
    for (i = 0, j = x - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            count1++;
            j++;
        }
    }
    //Count how many characters add to befor
    for (i = x-1, j = 0; j < i; i--, j++) {
        if (arr[i] != arr[j]) {
            count2++;
            j--;
        }
    }
    //Easy way to create palindrome
    if(count1<count2)
        printf("%d\n",count1);
    else
        printf("%d\n",count2);
}


int main(){
    char arr[20];
    int x;
    int value;
//Input the Characters
    scanf("%s",&arr);
    x=strlen(arr);
    value = reverse(x,arr);
//Check Palindrome or not Palindrome
    if(value == 0)  
        printf("0");  
    else  {
        palindrome(x,arr);
    }
        
    return 0;
}
