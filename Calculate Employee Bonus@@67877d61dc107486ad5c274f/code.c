#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};
float bonuscalculator(float salary){
if(salary<50000){
    return 0.10*salary;
}
else{
    return 0.05*salary;
}
}

int main() {
    int n;
    scanf("%d", &n);
    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &employees[i].id, employees[i].name, &employees[i].salary);
    }
    for (int i = 0; i < n; i++) {
        float bonus = bonuscalculator(employees[i].salary);
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n", employees[i].id, employees[i].name, bonus);
    }

    return 0;
}
