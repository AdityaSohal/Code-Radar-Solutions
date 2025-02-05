#include <stdio.h>

int setNthBit(int num, int n) {
    return num | (1 << n);  // Use bitwise OR to set the nth bit to 1
}

int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    
    int updatedNum = setNthBit(num, n);
    printf("%d\n", updatedNum);
    
    return 0;
}
