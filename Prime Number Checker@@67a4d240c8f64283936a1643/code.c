#include <stdio.h>

int isprime(int num) {
    if (num <= 1)
        return 0;  
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;  
    }
    return 1;  
}

int main() {
    int t;
    scanf("%d", &t);  

    while (t--) {
        int num;
        scanf("%d", &num);  
        printf("%d\n", isprime(num));  
    }

    return 0;
}
