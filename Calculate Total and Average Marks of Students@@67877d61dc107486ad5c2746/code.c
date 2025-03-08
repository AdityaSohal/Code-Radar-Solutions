#include <stdio.h>
struct student{
int rollno;
char name[50];
float marks;
};
int main(){
    int n;
    float sum=0.0;
    float avgmarks;
    scanf("%d",&n);
    struct student students[n];
    for(int i =0;i<n;i++){
        scanf("%d %s %f", &students[i].rollno, students[i].name, &students[i].marks);
    }
    for(int i=0;i<n;i++){
        sum += students[i].marks;
    }
    avgmarks=sum/n;
    printf("Total Marks: %2.f\n",float(sum));
    printf("Average Marks: %.2f",avgmarks);
    return 0;
}