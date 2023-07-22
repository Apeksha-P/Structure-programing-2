#include <stdio.h>
int func(int size,int *arr){
    int sum=0;
    for(int i=0;i<size;i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main() {
    int arr[]={54,45,63,47,25,62};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = func(size,arr);
    printf("%d",sum);              //296
    return 0;
}
