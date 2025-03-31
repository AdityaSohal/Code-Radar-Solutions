#include <stdio.h>

int main() {
    int n;
    // Read the size of the array
    scanf("%d", &n);
    
    int arr[n]; // Declare the array

    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Use &arr[i] to read the value into the array
    }

    int candidate = -1;
    int count = 0;

    // Phase 1: Find a candidate for the majority element
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verify if the candidate is actually the majority element
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    // Check if the count of the candidate is more than n/2
    if (count > n / 2) {
        printf("%d\n", candidate); // Print the majority element
    } else {
        printf("-1\n"); // No majority element
    }

    return 0;
}