// #include <stdio.h>
// int main(){
//     char ch;
//     scanf("%c",&ch);
//     if(ch=='R'||ch=='r'){
//     printf("Stop");}
//     else if(ch=='Y'||ch=='y'){
//     printf("Slow Down");}
//     else if(ch=='G'||ch=='g'){
//     printf("Go");}
//     else
//     printf("Invalid Input");
//     return 0;
// }
#include <stdio.h>

int main() {
    char signal; // Variable to hold the traffic light signal input

    // Taking a single character as input
    scanf(" %c", &signal);

    // Simulating the traffic light system based on input
    if (signal == 'R' || signal == 'r') {
        printf("Stop\n");
    } else if (signal == 'G' || signal == 'g') {
        printf("Go\n");
    } else if (signal == 'Y' || signal == 'y') {
        printf("Slow Down\n");
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
