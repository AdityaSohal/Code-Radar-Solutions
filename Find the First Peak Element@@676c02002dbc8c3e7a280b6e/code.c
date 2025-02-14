#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    // Check if the first element is a peak
    if (n == 1 || arr[0] > arr[1]) {
        return arr[0];
    }

    // Check for peak from the second element to the second last
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i];
        }
    }

    // Check if the last element is a peak
    if (arr[n - 1] > arr[n - 2]) {
        return arr[n - 1];
    }

    // Return -1 if no peak is found
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);  // Read size of array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read array elements
    }

    int peak = findFirstPeak(arr, n);  // Find the first peak element
    printf("%d\n", peak);  // Output the result

    return 0;
}
