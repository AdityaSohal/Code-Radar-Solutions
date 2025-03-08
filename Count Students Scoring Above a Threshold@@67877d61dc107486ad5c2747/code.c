#include <stdio.h>

struct Student {
    int rollno;
    char name[50];
    float marks;
};

int main() {
    int n;
    float thresh;
    scanf("%d", &n);
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollno, students[i].name, &students[i].marks);
    }
    scanf("%f", &thresh);
    int count=0;
    for(int i =0;i<n;i++){
        if(students[i].marks>thresh){
            count++;
        }
    }
    printf("Counf of students scoring above %d: %d",thresh,count);


    return 0;
}
