#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int A,B,S,N,x;
    //input value 
    scanf("%d %d %d %d",&A,&B,&S,&N);

    //Find number of banknotes worth A need
    if(A!=B){
        x=(S-B*N)/(A-B);

        //Output
        if(x<0)
            printf("-1");
        else
            printf("%d",x);
    }
    
    return 0;
}
