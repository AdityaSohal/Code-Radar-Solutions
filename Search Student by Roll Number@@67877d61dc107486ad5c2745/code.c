#include <stdio.h>
struct student{
int rollno;
char name[50];
float marks;
};
int main(){
    int n;
    int s;
    scanf("%d",&n);
    struct student students[n];
    for(int i =0;i<n;i++){
        scanf("%d %s %f", &students[i].rollno, students[i].name, &students[i].marks);
    }
    scanf("%d",&s);
    int found =0;
    for(int i=0;i<n;i++){
        if(n==s){
       printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
            found = 1; 
            break; 
    }}
    if(!found){
        printf("Student not found")
    }
    
    return 0;
}