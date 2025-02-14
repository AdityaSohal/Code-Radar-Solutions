#include <stdio.h>

int main(){
    int n;int k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    int iffound =0;
for(int i=0;i<n;i++){
    if(arr[i]==k){
        printf("%d",i);
        iffound=1;
        break;
    } 
}
if(! iffound){
    printf("-1");
}
    return 0;
}