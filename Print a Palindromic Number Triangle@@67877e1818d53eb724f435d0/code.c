#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the number of rows
    
    int num = 1;  // Start number

    // Loop through each row
    for (int i = 1; i <= n; i++) {
        // Print leading spaces for pyramid shape
        for (int j = i; j < n; j++) {
            printf(" ");
        }

        // Print numbers for the current row
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
