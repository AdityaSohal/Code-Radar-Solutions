#include <stdio.h>
int main(){
    char ch;
    scanf("%c",ch);
    if(ch=='R'){
    printf("Stop");}
    else if(ch=='Y'){
    printf("Slow Down");}
    else if(ch=='G'){
    printf("So");}
    else
    printf("Invalid Input");
    return 0;
}