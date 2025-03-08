#include <stdio.h>
struct student{
int rollno;
char name[50];
float marks;
};
int main(){
    int n;
    scanf("%d",n);
    struct student[n];
    for(int i =0;i<n;i++){
        scanf("%d %s %f", &student[i].marks, student[i].name, &student[i].marks);
    }
    for(int i=0;i<n;i++){
        printf("Roll Number: %d, Name: %s, marks: %.2f", student[i].marks, student[i].name, student[i].marks);
    }
    return 0;
}