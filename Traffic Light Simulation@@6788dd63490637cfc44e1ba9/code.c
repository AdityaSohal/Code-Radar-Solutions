#include <stdio.h>
int main(){
    char signal;
    scanf("%c",&signal);
    if(signal=='R'||signal=='r'){
    printf("Stop");}
    else if(signal=='G'||signal=='g'){
    printf("Go");}
    else if(signal=='Y'||signal=='y'){
    printf("Slow Down");}
    else
    printf("Invalid Input");
    return 0;
}

