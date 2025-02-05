#include <stdio.h>

int main() {
    unsigned int num, n; // Variables to hold the integer input and bit position

    // Taking two integers as input: number and bit position
    scanf("%u %u", &num, &n);

    // Clearing the nth bit (0-based index)
    num = num & (~(1U << n));

    // Printing the updated number after clearing the nth bit
    printf("%u\n", num);

    return 0;
}

