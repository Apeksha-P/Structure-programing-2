#include<stdio.h>
int main(){
    int want;

    char oldFileName[100], newFileName[100];
    int flag = 1;

    FILE *sourceFile, *destinationFile;
    char sourceFileName[100], destinationFileName[100];
    char ch;

    printf("\nYou can rename file or copy details to another file\n");
    printf("\nDo you want to rename file press 1 : ");
    printf("\nDo you want to copy file data to another file press 2: \n");
    scanf("%d",&want);
    switch(want){
        case 1 :
            while(flag==1){
                // Get the names of the file name want to rename from the user
                printf("\n\nWhat is the file name do you want to rename?: \n");
                scanf("%s", oldFileName);

                //Get the new name to file
                printf("\nNew name for the file: \n");
                scanf("%s", newFileName);

                if (rename(oldFileName, newFileName) == 0) {
                    printf("\nRenamed successfully.\nNew file name : %s \n", newFileName);
                    flag = 0;
                    break;

                } else {
                    printf("\nRename fail.\n");
                }
            }
            break;
        case 2 :
            // Get the names of the source and destination files from the user
            printf("\nEnter the name of the source file: ");
            scanf("%s", sourceFileName);

            printf("Enter the name of the destination file: ");
            scanf("%s", destinationFileName);

            // Open the source file in read mode
            sourceFile = fopen(sourceFileName, "r");

            if (sourceFile == NULL) {
                printf("Error opening the source file.\n");
                return 1;
            }

            // Open the destination file in write mode
            destinationFile = fopen(destinationFileName, "w");

            if (destinationFile == NULL) {
                printf("Error opening the destination file.\n");
                fclose(sourceFile);
                return 1;
            }

            // Copy the contents of the source file to the destination file
            while ((ch = fgetc(sourceFile)) != EOF) {
                fputc(ch, destinationFile);
            }

            printf("File copied successfully.\n");

            // Close the files
            fclose(sourceFile);
            fclose(destinationFile);
            break;
        default :
            printf("\nTry again !");
    }


}
