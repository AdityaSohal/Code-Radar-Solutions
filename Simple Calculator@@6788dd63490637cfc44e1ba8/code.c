#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    scanf("%d %c %d", &num1, &op, &num2);
    if (op == '+') {
        printf("%d\n", num1 + num2);
    } else if (op == '-') {
        printf("%d\n", num1 - num2);
    } else if (op == '*') {
        printf("%d\n", num1 * num2);
    } else if (op == '/') {
        if (num2 != 0) {
            printf("%d\n", num1 / num2);
        } else {
            printf("error\n");
        }
    } else {
        printf("error\n");
    }
    return 0;
}
