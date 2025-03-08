#include <stdio.h>

struct Student {
    int rollno;
    char name[50];
    char grades[1];
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %s", &students[i].rollno, students[i].name, students[i].grades);
    }

    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Grades: %s\n", students[i].rollno, students[i].name, students[i].grades);
    }

    return 0;
}
