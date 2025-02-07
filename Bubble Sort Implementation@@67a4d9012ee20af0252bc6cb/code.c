#include <stdio.h>
int bubblesort(int arr[],int n){

}
int printArray(int arr[],int n){
for(int i=0;i<n;i++){
    printf("%d",&arr[i]);
}
printf("\n");
}


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    printArray(arr,n);

    return 0;

}