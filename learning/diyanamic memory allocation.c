#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[20];
    int age;
    float marks;
};
int main(){
    struct student * ptr;
    ptr = (struct student *)malloc(3*sizeof(struct student));
    for(int i=0;i<3;i++){
        scanf("%s",ptr[i].name);
        scanf("%d",&ptr[i].age);
        scanf("%f",&ptr[i].marks);
    }
    for(int i=0;i<3;i++){
        printf("\n%s",ptr[i].name);
        printf("\n%d",ptr[i].age);
        printf("\n%.2f",ptr[i].marks);
    }
    free(ptr);
}
