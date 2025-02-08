#include <stdio.h>

int main() {
    int N, K;
    
    // Input the size of the array
    scanf("%d", &N);
    
    int arr[N];
    
    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the number of rotations
    scanf("%d", &K);
    
    // To handle cases where K > N
    K = K % N;
    
    // Temporary array to store the rotated version
    int rotated[N];
    
    // Rotate the array to the right by K positions
    for (int i = 0; i < N; i++) {
        rotated[(i + K) % N] = arr[i];
    }
    
    // Output the rotated array
    for (int i = 0; i < N; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");
    
    return 0;
}
