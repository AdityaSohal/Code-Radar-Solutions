#include <stdio.h>

int main() {
    unsigned int num, n; // Variables to hold the integer input and bit position

    // Taking two integers as input: number and bit position
    scanf("%u %u", &num, &n);

    // Retrieving the value of the nth bit (0-based index)
    int bit = (num >> n) & 1;

    // Printing the value of the nth bit
    printf("%d\n", bit);

    return 0;
}
