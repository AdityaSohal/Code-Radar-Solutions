#include <stdio.h>

void swap(int *a, int *b) {
    *a = *a ^ *b;  // Step 1: a becomes a ^ b
    *b = *a ^ *b;  // Step 2: b becomes (a ^ b) ^ b = a
    *a = *a ^ *b;  // Step 3: a becomes (a ^ b) ^ a = b
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("%d %d\n", a, b);

    return 0;
}
