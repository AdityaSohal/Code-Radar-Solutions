#include <stdio.h>

struct Student {
    int rollno;
    char name[50];
    float marks;
};

int main() {
    int n;
    int index;
    scanf("%d", &n);
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollno, students[i].name, &students[i].marks);
    }
    float lowest = students[0].marks;
    for(int i =0;i<n;i++){
        if(students[i].marks<lowest){
            lowest= students[i].marks;
            index=i;
        }
    }
     printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n", students[index].rollno, students[index].name, students[index].marks);

    return 0;
}
