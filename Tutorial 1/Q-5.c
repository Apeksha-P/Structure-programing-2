//Find the largest element in an array

#include <stdio.h>

int main() {
    int n;
    printf("How meny numbers you enter to array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter numbers to array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(max>arr[i]){
            continue;
        }
        else{
            max=arr[i];
        }
    }
    printf("Max = %d",max);
    return 0;
}