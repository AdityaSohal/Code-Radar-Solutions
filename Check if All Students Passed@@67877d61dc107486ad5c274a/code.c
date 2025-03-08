#include <stdio.h>

struct Student {
    int rollno;
    char name[50];
    float marks;
};

int main() {
    int n;
    float thresh=50.0;
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
    if(count==n){
    printf("All Passed");
    }
    else{
        printf("Not All Passed");
    }

    return 0;
}
