#include <stdio.h>

struct Student {
    int rollno;
    char name[50];
    float marks;
};
char getgrades(float marks){
    if(marks>= 85) return 'A';
    else if(marks>=70&& marks<85) return 'B';
    else return 'C';
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollno, students[i].name, &students[i].marks);
    }
    

    for (int i = 0; i < n; i++) {
        char grade = getgrades(students[i].marks);
        printf("Roll Number: %d, Name: %s, Grades: %c\n", students[i].rollno, students[i].name, grade);
    }

    return 0;
}
