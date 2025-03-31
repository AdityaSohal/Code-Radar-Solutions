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
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }
    if (count > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}