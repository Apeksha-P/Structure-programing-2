#include <stdio.h>

int main() {
    char oldFileName[100], newFileName[100];
    int flag = 1;

    while(flag==1){
        printf("\n\nWhat is the file name do you want to rename?: \n");
        scanf("%s", oldFileName);

        printf("\nNew name for the file: \n");
        scanf("%s", newFileName);

        if (rename(oldFileName, newFileName) == 0) {
            printf("\nRenamed successfully.\nNew file name : %s \n\n", newFileName);
            flag = 0;
            break;

        } else {
            printf("\nRename fail.\n");
        }
    }



    return 0;
}
