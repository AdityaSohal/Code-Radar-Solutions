#include <stdio.h>
#include <stdbool.h>
int isPrime(int num){
    if(num<2){
        isPrime =0;
    }
    for(int i=2;i<n;i++){
        if(num%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int num;
        scanf("%d", &num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}