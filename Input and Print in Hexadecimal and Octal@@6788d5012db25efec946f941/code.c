//to print hexadecimal and octal values of a entered integer
#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    printf("Hexadecimal: %h",num);
    printf("Octal: %o",num);
    return 0;
}