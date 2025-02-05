// #include<stdio.h>
// int main(){
//     int age;
//     char name[100], hobby[100];
//     scanf("%d %s %s",&age, name, hobby);
//     printf("Name: %s\n",name);
//     printf("Age: %d\n",age);
//     printf("Hobby: %s\n",hobby);
//     return 0;
// }
#include <stdio.h>

int main() {
    char name[100], hobby[100]; // Variables to hold the name and hobby
    int age; // Variable to hold the age

    // Taking name, age, and hobby as input
    scanf("%s %d %s", name, &age, hobby);

    // Printing the name, age, and hobby
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}
