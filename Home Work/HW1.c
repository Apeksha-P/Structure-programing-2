#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char arr[20];
    int x,i,count1=0,count2,j;
    int r=0;
//Input the Characters
    scanf("%s",&arr);
    x=strlen(arr);
    char rev[x];
    int value;
//Create reverse of the char array    
    for(i=0;i<x;i++){
        rev[i] = arr[x-i-1];
    }
//Check Palindrome or not Palindrome
    value = strcmp(arr, rev);  
    if(value == 0)  
        printf("0");  
    else  {
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
        
    return 0;
}
