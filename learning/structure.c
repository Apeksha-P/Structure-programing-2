#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    int marks;
};
int main(){
    int n,i;
    printf("Enter how many student info you entered: ");
    scanf("%d",&n);
    struct student s[n];
    printf("Enter student info: \n");
    for(i=0;i<n;i++){
        printf("%d student info \n",i+1);
        scanf("%d %s %d",&s[i].rollno,&s[i].name,&s[i].marks);
    }
    for(i=0;i<n;i++){
        printf("Info of sudent %d : \nroll number : %d \nname: %s \nmarks: %d\n",i,s[i].rollno,s[i].name,s[i].marks);
    }
}
