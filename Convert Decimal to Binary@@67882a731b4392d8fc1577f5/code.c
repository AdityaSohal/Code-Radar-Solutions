#include <stdio.h>

void decimalToBinary(int num) {
    // We will start from the most significant bit (MSB) and move to the least significant bit (LSB)
    int bits = sizeof(num) * 8;  // Total bits in an integer (typically 32 bits)
    int leadingZero = 1;  // Flag to skip leading zeros

    // Loop through all bits
    for (int i = bits - 1; i >= 0; i--) {
        // Check if the current bit is 1 or 0
        int bit = (num >> i) & 1;

        // Print the bit if it's 1, and skip leading zeros
        if (bit == 1 || !leadingZero) {
            printf("%d", bit);
            leadingZero = 0;  // Stop skipping leading zeros once a 1 is encountered
        }
    }

    // Special case for 0, as it should output 0
    if (leadingZero) {
        printf("0");
    }

    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);

    decimalToBinary(num);

    return 0;
}
