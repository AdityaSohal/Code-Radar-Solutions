#include <stdio.h>

int main(){
int n;
int size;
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
scanf("%d",&n);
n=size%n;
    return 0;
}