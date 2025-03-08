#include <stdio.h>
struct student{
    int rollno;
    char name[50];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct student[n];
    for(int i =0;i<n;i++){
        scanf("%d %s %f", &student[i].rollno, student[i],name , student[i].marks);
    }
    for(int i =0;i<n;i++){
        printf("Roll Number:\n%d,\nName :\n%s,\nMarks :\n%.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }
}