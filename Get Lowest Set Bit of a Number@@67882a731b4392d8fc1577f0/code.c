#include <stdio.h>

int findLowestSetBitPosition(int num) {
    if (num == 0) {
        return -1; // No set bits
    }
    return num & -num; // This isolates the lowest set bit
}

int main() {
    int num;
    scanf("%d", &num);
    
    int pos = findLowestSetBitPosition(num);
    
    if (pos == -1) {
        printf("No set bit found\n");
    } else {
        // Find the 0-based position of the lowest set bit
        int position = 0;
        while (pos > 1) {
            pos >>= 1;
            position++;
        }
        printf("%d\n", position);
    }
    return 0;
}
