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
        print("%d",i);
        iffound=1;
    } 
}
if(!iffound){
    print("-1");
}
    return 0;
}