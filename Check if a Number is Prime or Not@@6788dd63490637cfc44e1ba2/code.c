
// #include <stdio.h>

// int main() {
//     int num, i, isPrime = 1;

//     // Input the number
//     scanf("%d", &num);

//     // Check if the number is less than 2
//     if (num <= 1) {
//         isPrime = 0;  // Numbers less than or equal to 1 are not prime
//     } else {
//         // Check for factors from 2 to sqrt(num)
//         for (i = 2; i * i <= num; i++) {
//             if (num % i == 0) {
//                 isPrime = 0;  // If divisible by any number other than 1 and itself
//                 break;
//             }
//         }
//     }

//     // Output the result
//     if (isPrime) {
//         printf("Prime\n");
//     } else {
//         printf("Not Prime\n");
//     }

//     return 0;
// }
#include <stdio.h>
int main(){
    int num,i, isPrime =1;
    scanf("%d",&num);
    if(num<=1){
        isPrime=0;}
    else{
        for(i=2;i<num;i++){
            if(num%i==0){
                isPrime=0;
            }
        }
    }
    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }
    return 0;

}
