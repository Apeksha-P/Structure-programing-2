#include <stdio.h>

int main() {
    int n;

    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int y = 65;
        for(int j=5;j>=i;j--){
            printf("%c ",y);
            y++;
        }
        printf("\n");
    }
    return 0;
}
