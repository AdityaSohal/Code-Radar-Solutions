#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    scanf("%d %c %d", &num1, &operator, &num2);
    if (operator == '+') {
        printf("%d\n", num1 + num2);
    } else if (operator == '-') {
        printf("%d\n", num1 - num2);
    } else if (operator == '*') {
        printf("%d\n", num1 * num2);
    } else  {
            printf("%d\n", num1 / num2);
        
    } 

    return 0;
}
