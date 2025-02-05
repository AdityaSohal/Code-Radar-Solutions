#include <stdio.h>

int main() {
    int number, n;
    scanf("%d", &number);
    scanf("%d", &n);
    number ^= (1 << n);
    printf("%d\n",number);
    return 0;
}