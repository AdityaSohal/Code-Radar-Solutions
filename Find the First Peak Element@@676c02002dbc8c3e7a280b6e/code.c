#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int arr[n];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int peak=-1;
    for(i = 0; i < N; i++) {
        if((i == 0 && arr[i] > arr[i + 1]) || 
           (i == N - 1 && arr[i] > arr[i - 1]) || 
           (i > 0 && i < N - 1 && arr[i] > arr[i - 1] && arr[i] > arr[i + 1])) {
            peak = arr[i];
            break;
        }
    }
    printf("%d",temp);
}