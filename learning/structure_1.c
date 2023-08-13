#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    int marks;
};
int main(){
    struct student s={1,"jenny",40};
    struct student * ptr = &s;
    printf("%d\n%s\n%d",ptr->rollno,ptr->name,ptr->marks);
    
}
