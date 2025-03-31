#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("&d",arr[i]);
    }
    int candidate = -1;
    int count =0;
    for(int i =0;i<n;i++){
        if (count == 0){
            candidate = arr[i];
            count = 1;
        }
        else if( arr[i]==candidate){
            count++;
        }
        else{
            count--;
        }
    }
    if(count> n/2){
        printf("%d\n", candidate);
    }else{
        printf("-1\n");
    }
    

    return 0;
}