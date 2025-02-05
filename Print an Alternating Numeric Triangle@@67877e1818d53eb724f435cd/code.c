#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < i / 2; ++j) {
                printf("0 1");
            }
        } else {
            printf("1 ");
            for (int j = 0; j < i / 2; ++j) {
                printf("0 1");
            }
        }
        printf("\n");
    }
    return 0;
}
