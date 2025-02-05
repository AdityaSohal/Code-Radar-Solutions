// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if(j%2!=0){
//                 printf("1 ");
//             }
//             else
//             printf("0 ");
//         }
//         printf("\n");
//     }
// }
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the number of rows
    
    // Loop through each row
    for (int i = 1; i <= n; i++) {
        // Print the alternating numbers for the current row
        for (int j = 1; j <= i; j++) {
            // Alternate between 1 and 0
            if (j % 2 != 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }
    
    return 0;
}
