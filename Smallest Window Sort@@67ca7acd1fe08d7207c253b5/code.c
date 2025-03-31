#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[10000];
        for(int i =0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("%d\n", &arr[i]);
    }
    return 0;
}