// #include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

// int main() {
//     printf("%s", welcome());
//     return 0;
// }
#include <stdio.h>
int main(){
    int n1,n2,n3;
    float avg;
    scanf("%d %d %d", &n1, &n2, &n3);
    avg= (n1+n2+n3)/3.0;
    printf("Average: %.2f",avg);
    return 0;
}