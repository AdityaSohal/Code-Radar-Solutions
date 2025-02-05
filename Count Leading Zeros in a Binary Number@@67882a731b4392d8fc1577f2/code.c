#include <stdio.h>

int countLeadingZeros(int num) {
    int count = 0;
    // Loop through all 32 bits
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            break;  // Stop as soon as we encounter the first 1
        }
        count++;
    }
    return count;
}

int main() {
    int num;
    scanf("%d", &num);
    
    int result = countLeadingZeros(num);
    printf("%d\n", result);
    
    return 0;
}
