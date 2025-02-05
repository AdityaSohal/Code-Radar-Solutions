#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    // Input: two integers and the operator
    scanf("%d %c %d", &num1, &operator, &num2);

    // Perform the operation based on the operator
    if (operator == '+') {
        printf("%d\n", num1 + num2);
    } else if (operator == '-') {
        printf("%d\n", num1 - num2);
    } else if (operator == '*') {
        printf("%d\n", num1 * num2);
    } else if (operator == '/') {
        // Handle division by zero
        if (num2 != 0) {
            printf("%d\n", num1 / num2);
        } else {
            printf("Error: Division by zero\n");
        }
    } else {
        // Invalid operator
        printf("Error: Invalid operator\n");
    }

    return 0;
}
