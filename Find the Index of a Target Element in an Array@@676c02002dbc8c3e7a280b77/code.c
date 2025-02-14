#include <stdio.h>

int main(){
    int n;int k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0li<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
for(int i=0;i<n;i++){
    if(arr[i]==k){
        print("%d",i);
    }
    else{
        print("-1");
    }
}
    return 0;
}