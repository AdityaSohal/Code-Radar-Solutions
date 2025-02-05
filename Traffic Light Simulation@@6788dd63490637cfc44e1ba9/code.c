#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='R'||ch=='r'){
    printf("Stop");}
    else if(ch=='Y'||ch=='y'){
    printf("Slow Down");}
    else if(ch=='G'||ch=='g'){
    printf("Go");}
    else
    printf("Invalid Input");
    return 0;
}