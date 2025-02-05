#include <stdio.h>

int countTrailingZeros(int num) {
    int count = 0;
    
    
    while (num != 0 && (num & 1) == 0) {
        count++;
        num >>= 1;  
    }
    
    return count;
}

int main() {
    int num;
    scanf("%d", &num);
    
    int result = countTrailingZeros(num);
    printf("%d\n", result);
    
    return 0;
}
