#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0;               // Numbers less than 2 are not prime
    if (num == 2) return 1;              // 2 is prime (special case)
    if (num % 2 == 0) return 0;          // Even numbers greater than 2 are not prime
    
    for (int i = 3; i * i <= num; i += 2) {  // Check only odd divisors
        if (num % i == 0) return 0;      // Not prime if divisible by i
    }
    return 1;                           // Prime if no divisors found
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));    // Print 1 if prime, 0 if not
    }
    return 0;
}
