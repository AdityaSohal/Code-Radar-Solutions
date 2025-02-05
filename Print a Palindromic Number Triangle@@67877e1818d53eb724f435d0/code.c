#include <stdio.h>

void print_palindromic_triangle(int N) {
    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (int j = i; j < N; j++) {
            printf(" ");
        }
        
        // Print increasing part of the number
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        // Print decreasing part of the number
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        
        // Move to the next line
        printf("\n");
    }
}

int main() {
    int N;
    printf("Enter the number of rows: ");
    scanf("%d", &N);
    
    print_palindromic_triangle(N);
    
    return 0;
}
