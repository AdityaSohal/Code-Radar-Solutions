#include <stdio.h>
int main(){
    int n1;
    scanf("%d",&n1);
    if (n1 & 1) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }
    return 0;
}