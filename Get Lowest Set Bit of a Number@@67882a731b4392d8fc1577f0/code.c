#include <stdio.h>

int getLowestSetBitPosition(int num) {
    if (num == 0) {
        return -1; // No set bits in the number
    }

    // Isolate the lowest set bit
    int lowestSetBit = num & -num;

    // Find the position of the lowest set bit
    int position = 0;
    while (lowestSetBit >>= 1) {
        position++;
    }

    return position;
}

int main() {
    int num;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Get the position of the lowest set bit
    int position = getLowestSetBitPosition(num);

    // Output the result
    if (position == -1) {
        printf("No set bits in the number.\n");
    } else {
        printf("The position of the lowest set bit is: %d\n", position);
    }

    return 0;
}